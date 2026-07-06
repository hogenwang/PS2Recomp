#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351290
// Address: 0x351290 - 0x351300
void sub_00351290_0x351290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351290_0x351290");
#endif

    switch (ctx->pc) {
        case 0x3512a0u: goto label_3512a0;
        case 0x3512dcu: goto label_3512dc;
        case 0x3512e8u: goto label_3512e8;
        default: break;
    }

    ctx->pc = 0x351290u;

    // 0x351290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351298: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x351298u;
    SET_GPR_U32(ctx, 31, 0x3512A0u);
    ctx->pc = 0x350DC0u;
    if (runtime->hasFunction(0x350DC0u)) {
        auto targetFn = runtime->lookupFunction(0x350DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3512A0u; }
        if (ctx->pc != 0x3512A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350DC0_0x350dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3512A0u; }
        if (ctx->pc != 0x3512A0u) { return; }
    }
    ctx->pc = 0x3512A0u;
label_3512a0:
    // 0x3512a0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3512a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3512a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3512a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3512a8: 0x90459490  lbu         $a1, -0x6B70($v0)
    ctx->pc = 0x3512a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x3512ac: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3512acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3512b0: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x3512b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x3512b4: 0x24845470  addiu       $a0, $a0, 0x5470
    ctx->pc = 0x3512b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
    // 0x3512b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3512b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3512bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3512bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3512c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3512c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3512c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3512c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3512c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3512c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3512cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3512ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3512d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3512d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3512d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x3512D4u;
    SET_GPR_U32(ctx, 31, 0x3512DCu);
    ctx->pc = 0x3512D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3512D4u;
            // 0x3512d8: 0xa3a2001c  sb          $v0, 0x1C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3512DCu; }
        if (ctx->pc != 0x3512DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3512DCu; }
        if (ctx->pc != 0x3512DCu) { return; }
    }
    ctx->pc = 0x3512DCu;
label_3512dc:
    // 0x3512dc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x3512dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x3512e0: 0xc0bb518  jal         func_2ED460
    ctx->pc = 0x3512E0u;
    SET_GPR_U32(ctx, 31, 0x3512E8u);
    ctx->pc = 0x3512E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3512E0u;
            // 0x3512e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED460u;
    if (runtime->hasFunction(0x2ED460u)) {
        auto targetFn = runtime->lookupFunction(0x2ED460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3512E8u; }
        if (ctx->pc != 0x3512E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED460_0x2ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3512E8u; }
        if (ctx->pc != 0x3512E8u) { return; }
    }
    ctx->pc = 0x3512E8u;
label_3512e8:
    // 0x3512e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3512e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3512ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3512ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3512f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3512F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3512F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3512F0u;
            // 0x3512f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3512F8u;
    // 0x3512f8: 0x0  nop
    ctx->pc = 0x3512f8u;
    // NOP
    // 0x3512fc: 0x0  nop
    ctx->pc = 0x3512fcu;
    // NOP
    ctx->pc = 0x351300u;
}
