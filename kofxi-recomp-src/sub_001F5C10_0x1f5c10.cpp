#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5C10
// Address: 0x1f5c10 - 0x1f5d00
void sub_001F5C10_0x1f5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5C10_0x1f5c10");
#endif

    switch (ctx->pc) {
        case 0x1f5c48u: goto label_1f5c48;
        default: break;
    }

    ctx->pc = 0x1f5c10u;

    // 0x1f5c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5c20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f5c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5c28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f5c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f5c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f5c30: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f5c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f5c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f5c38: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1f5c38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c3c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f5c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f5c40: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1F5C40u;
    SET_GPR_U32(ctx, 31, 0x1F5C48u);
    ctx->pc = 0x1F5C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C40u;
            // 0x1f5c44: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C48u; }
        if (ctx->pc != 0x1F5C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5C48u; }
        if (ctx->pc != 0x1F5C48u) { return; }
    }
    ctx->pc = 0x1F5C48u;
label_1f5c48:
    // 0x1f5c48: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f5c4c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1f5c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f5c50: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1f5c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f5c54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f5c58: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f5c5c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1f5c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1f5c60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f5c64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f5c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f5c68: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5C68u;
    {
        const bool branch_taken_0x1f5c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c68) {
            ctx->pc = 0x1F5C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C68u;
            // 0x1f5c6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5C70u;
            goto label_1f5c70;
        }
    }
    ctx->pc = 0x1F5C70u;
label_1f5c70:
    // 0x1f5c70: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1f5c70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f5c74: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f5c78: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1f5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1f5c7c: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x1f5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x1f5c80: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x1f5c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f5c84: 0x3810  mfhi        $a3
    ctx->pc = 0x1f5c84u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1f5c88: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1f5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1f5c8c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1f5c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f5c90: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5C90u;
    {
        const bool branch_taken_0x1f5c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c90) {
            ctx->pc = 0x1F5C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C90u;
            // 0x1f5c94: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5CB8u;
            goto label_1f5cb8;
        }
    }
    ctx->pc = 0x1F5C98u;
    // 0x1f5c98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5c9c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x1f5c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x1f5ca0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f5ca4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1f5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1f5ca8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1f5cac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F5CACu;
    {
        const bool branch_taken_0x1f5cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CACu;
            // 0x1f5cb0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cac) {
            ctx->pc = 0x1F5CD8u;
            goto label_1f5cd8;
        }
    }
    ctx->pc = 0x1F5CB4u;
    // 0x1f5cb4: 0x0  nop
    ctx->pc = 0x1f5cb4u;
    // NOP
label_1f5cb8:
    // 0x1f5cb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5cbc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f5cc0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1f5cc4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f5cc8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1f5ccc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1f5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f5cd0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1f5cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1f5cd4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1f5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1f5cd8:
    // 0x1f5cd8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1f5cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f5cdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5ce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5ce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f5ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5cec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f5cecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5cf0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f5cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5cf4: 0x8043320  j           func_10CC80
    ctx->pc = 0x1F5CF4u;
    ctx->pc = 0x1F5CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5CF4u;
            // 0x1f5cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F5CFCu;
    // 0x1f5cfc: 0x0  nop
    ctx->pc = 0x1f5cfcu;
    // NOP
    ctx->pc = 0x1f5d00u;
}
