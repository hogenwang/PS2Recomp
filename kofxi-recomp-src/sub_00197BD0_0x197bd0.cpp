#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197BD0
// Address: 0x197bd0 - 0x197cf0
void sub_00197BD0_0x197bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197BD0_0x197bd0");
#endif

    switch (ctx->pc) {
        case 0x197bfcu: goto label_197bfc;
        case 0x197c08u: goto label_197c08;
        case 0x197c48u: goto label_197c48;
        case 0x197c54u: goto label_197c54;
        case 0x197c70u: goto label_197c70;
        default: break;
    }

    ctx->pc = 0x197bd0u;

    // 0x197bd0: 0x8065ef8  j           func_197BE0
    ctx->pc = 0x197BD0u;
    ctx->pc = 0x197BE0u;
    goto label_197be0;
    ctx->pc = 0x197BD8u;
    // 0x197bd8: 0x0  nop
    ctx->pc = 0x197bd8u;
    // NOP
    // 0x197bdc: 0x0  nop
    ctx->pc = 0x197bdcu;
    // NOP
label_197be0:
    // 0x197be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197be4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x197be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x197be8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197bf4: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x197bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x197bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_197bfc:
    // 0x197bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c00: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x197c00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c04: 0x0  nop
    ctx->pc = 0x197c04u;
    // NOP
label_197c08:
    // 0x197c08: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x197c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x197c0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197C0Cu;
    {
        const bool branch_taken_0x197c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c0c) {
            ctx->pc = 0x197C20u;
            goto label_197c20;
        }
    }
    ctx->pc = 0x197C14u;
    // 0x197c14: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x197c18: 0xa04003a6  sb          $zero, 0x3A6($v0)
    ctx->pc = 0x197c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 934), (uint8_t)GPR_U32(ctx, 0));
    // 0x197c1c: 0x0  nop
    ctx->pc = 0x197c1cu;
    // NOP
label_197c20:
    // 0x197c20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x197c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x197c24: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x197c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197c28: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x197C28u;
    {
        const bool branch_taken_0x197c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C28u;
            // 0x197c2c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c28) {
            ctx->pc = 0x197C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197c08;
        }
    }
    ctx->pc = 0x197C30u;
    // 0x197c30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x197c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x197c34: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x197c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197c38: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x197C38u;
    {
        const bool branch_taken_0x197c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C38u;
            // 0x197c3c: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c38) {
            ctx->pc = 0x197BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197bfc;
        }
    }
    ctx->pc = 0x197C40u;
    // 0x197c40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x197c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197c48:
    // 0x197c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c4c: 0xc065f3c  jal         func_197CF0
    ctx->pc = 0x197C4Cu;
    SET_GPR_U32(ctx, 31, 0x197C54u);
    ctx->pc = 0x197C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197C4Cu;
            // 0x197c50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197CF0u;
    if (runtime->hasFunction(0x197CF0u)) {
        auto targetFn = runtime->lookupFunction(0x197CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C54u; }
        if (ctx->pc != 0x197C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197CF0_0x197cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C54u; }
        if (ctx->pc != 0x197C54u) { return; }
    }
    ctx->pc = 0x197C54u;
label_197c54:
    // 0x197c54: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x197c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197c58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x197c58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x197c5c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x197C5Cu;
    {
        const bool branch_taken_0x197c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197c5c) {
            ctx->pc = 0x197CB0u;
            goto label_197cb0;
        }
    }
    ctx->pc = 0x197C64u;
    // 0x197c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c68: 0xc065f80  jal         func_197E00
    ctx->pc = 0x197C68u;
    SET_GPR_U32(ctx, 31, 0x197C70u);
    ctx->pc = 0x197C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197C68u;
            // 0x197c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197E00u;
    if (runtime->hasFunction(0x197E00u)) {
        auto targetFn = runtime->lookupFunction(0x197E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C70u; }
        if (ctx->pc != 0x197C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197E00_0x197e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C70u; }
        if (ctx->pc != 0x197C70u) { return; }
    }
    ctx->pc = 0x197C70u;
label_197c70:
    // 0x197c70: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x197c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x197c74: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x197c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x197c78: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x197c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x197c7c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x197C7Cu;
    {
        const bool branch_taken_0x197c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x197c7c) {
            ctx->pc = 0x197CB0u;
            goto label_197cb0;
        }
    }
    ctx->pc = 0x197C84u;
    // 0x197c84: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x197c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x197c88: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x197c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x197c8c: 0x8c63bee4  lw          $v1, -0x411C($v1)
    ctx->pc = 0x197c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x197c90: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x197c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x197c94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x197C94u;
    {
        const bool branch_taken_0x197c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c94) {
            ctx->pc = 0x197CB0u;
            goto label_197cb0;
        }
    }
    ctx->pc = 0x197C9Cu;
    // 0x197c9c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x197c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x197ca0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x197ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x197ca4: 0x8c84bedc  lw          $a0, -0x4124($a0)
    ctx->pc = 0x197ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950620)));
    // 0x197ca8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x197ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x197cac: 0xac64bedc  sw          $a0, -0x4124($v1)
    ctx->pc = 0x197cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 4));
label_197cb0:
    // 0x197cb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x197cb4: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x197cb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197cb8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x197CB8u;
    {
        const bool branch_taken_0x197cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197cb8) {
            ctx->pc = 0x197C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197c48;
        }
    }
    ctx->pc = 0x197CC0u;
    // 0x197cc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x197cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x197cc4: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x197cc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197cc8: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x197CC8u;
    {
        const bool branch_taken_0x197cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197cc8) {
            ctx->pc = 0x197CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197CC8u;
            // 0x197ccc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197c48;
        }
    }
    ctx->pc = 0x197CD0u;
    // 0x197cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x197CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CDCu;
            // 0x197ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197CE4u;
    // 0x197ce4: 0x0  nop
    ctx->pc = 0x197ce4u;
    // NOP
    // 0x197ce8: 0x0  nop
    ctx->pc = 0x197ce8u;
    // NOP
    // 0x197cec: 0x0  nop
    ctx->pc = 0x197cecu;
    // NOP
    ctx->pc = 0x197cf0u;
}
