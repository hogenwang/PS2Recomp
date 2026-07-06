#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F64B0
// Address: 0x1f64b0 - 0x1f6560
void sub_001F64B0_0x1f64b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F64B0_0x1f64b0");
#endif

    switch (ctx->pc) {
        case 0x1f64ccu: goto label_1f64cc;
        case 0x1f64e8u: goto label_1f64e8;
        case 0x1f64f8u: goto label_1f64f8;
        default: break;
    }

    ctx->pc = 0x1f64b0u;

    // 0x1f64b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f64b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f64b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f64b8: 0x8c431780  lw          $v1, 0x1780($v0)
    ctx->pc = 0x1f64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6016)));
    // 0x1f64bc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F64BCu;
    {
        const bool branch_taken_0x1f64bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F64C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64BCu;
            // 0x1f64c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64bc) {
            ctx->pc = 0x1F64E8u;
            goto label_1f64e8;
        }
    }
    ctx->pc = 0x1F64C4u;
    // 0x1f64c4: 0xc042948  jal         func_10A520
    ctx->pc = 0x1F64C4u;
    SET_GPR_U32(ctx, 31, 0x1F64CCu);
    ctx->pc = 0x10A520u;
    if (runtime->hasFunction(0x10A520u)) {
        auto targetFn = runtime->lookupFunction(0x10A520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64CCu; }
        if (ctx->pc != 0x1F64CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A520_0x10a520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64CCu; }
        if (ctx->pc != 0x1F64CCu) { return; }
    }
    ctx->pc = 0x1F64CCu;
label_1f64cc:
    // 0x1f64cc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1f64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1f64d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f64d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f64d4: 0x24849b30  addiu       $a0, $a0, -0x64D0
    ctx->pc = 0x1f64d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941488));
    // 0x1f64d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f64d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64dc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1f64dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1f64e0: 0x80758c6  j           func_1D6318
    ctx->pc = 0x1F64E0u;
    ctx->pc = 0x1F64E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64E0u;
            // 0x1f64e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6318u;
    {
        auto targetFn = runtime->lookupFunction(0x1D6318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1F64E8u;
label_1f64e8:
    // 0x1f64e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f64e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f64ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F64ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F64F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64ECu;
            // 0x1f64f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F64F4u;
    // 0x1f64f4: 0x0  nop
    ctx->pc = 0x1f64f4u;
    // NOP
label_1f64f8:
    // 0x1f64f8: 0x8c892018  lw          $t1, 0x2018($a0)
    ctx->pc = 0x1f64f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f64fc: 0x25291198  addiu       $t1, $t1, 0x1198
    ctx->pc = 0x1f64fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4504));
    // 0x1f6500: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x1f6500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1f6504: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1f6504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1f6508: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x1f6508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1f650c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1f650cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1f6510: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1f6510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1f6514: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x1f6514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1f6518: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x1f6518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1f651c: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x1f651cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1f6520: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f6520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f6524: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1f6528: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1f6528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1f652c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f6530: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6530u;
    {
        const bool branch_taken_0x1f6530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6530) {
            ctx->pc = 0x1F6534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6530u;
            // 0x1f6534: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6538u;
            goto label_1f6538;
        }
    }
    ctx->pc = 0x1F6538u;
label_1f6538:
    // 0x1f6538: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f6538u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f653c: 0x2010  mfhi        $a0
    ctx->pc = 0x1f653cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f6540: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1f6540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1f6544: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x1f6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1f6548: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x1f6548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1f654c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1f654cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1f6550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f6554: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6554u;
            // 0x1f6558: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F655Cu;
    // 0x1f655c: 0x0  nop
    ctx->pc = 0x1f655cu;
    // NOP
    ctx->pc = 0x1f6560u;
}
