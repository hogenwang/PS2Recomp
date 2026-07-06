#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227C00
// Address: 0x227c00 - 0x227cc8
void sub_00227C00_0x227c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227C00_0x227c00");
#endif

    switch (ctx->pc) {
        case 0x227c14u: goto label_227c14;
        case 0x227c34u: goto label_227c34;
        case 0x227c44u: goto label_227c44;
        case 0x227c4cu: goto label_227c4c;
        case 0x227c68u: goto label_227c68;
        case 0x227c6cu: goto label_227c6c;
        case 0x227c80u: goto label_227c80;
        case 0x227c8cu: goto label_227c8c;
        case 0x227c94u: goto label_227c94;
        case 0x227cb4u: goto label_227cb4;
        default: break;
    }

    ctx->pc = 0x227c00u;

    // 0x227c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x227c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x227c0c: 0xc089f4c  jal         func_227D30
    ctx->pc = 0x227C0Cu;
    SET_GPR_U32(ctx, 31, 0x227C14u);
    ctx->pc = 0x227D30u;
    if (runtime->hasFunction(0x227D30u)) {
        auto targetFn = runtime->lookupFunction(0x227D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C14u; }
        if (ctx->pc != 0x227C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227D30_0x227d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C14u; }
        if (ctx->pc != 0x227C14u) { return; }
    }
    ctx->pc = 0x227C14u;
label_227c14:
    // 0x227c14: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x227C14u;
    {
        const bool branch_taken_0x227c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227C14u;
            // 0x227c18: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c14) {
            ctx->pc = 0x227C6Cu;
            goto label_227c6c;
        }
    }
    ctx->pc = 0x227C1Cu;
    // 0x227c1c: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x227c1cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x227c20: 0x8dcdf200  lw          $t5, -0xE00($t6)
    ctx->pc = 0x227c20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294963712)));
    // 0x227c24: 0x8daf0328  lw          $t7, 0x328($t5)
    ctx->pc = 0x227c24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x227c28: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x227c28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x227c2c: 0xc089f4c  jal         func_227D30
    ctx->pc = 0x227C2Cu;
    SET_GPR_U32(ctx, 31, 0x227C34u);
    ctx->pc = 0x227C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C2Cu;
            // 0x227c30: 0xadaf0328  sw          $t7, 0x328($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227D30u;
    if (runtime->hasFunction(0x227D30u)) {
        auto targetFn = runtime->lookupFunction(0x227D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C34u; }
        if (ctx->pc != 0x227C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227D30_0x227d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C34u; }
        if (ctx->pc != 0x227C34u) { return; }
    }
    ctx->pc = 0x227C34u;
label_227c34:
    // 0x227c34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x227C34u;
    {
        const bool branch_taken_0x227c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227C34u;
            // 0x227c38: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c34) {
            ctx->pc = 0x227C80u;
            goto label_227c80;
        }
    }
    ctx->pc = 0x227C3Cu;
    // 0x227c3c: 0xc089f40  jal         func_227D00
    ctx->pc = 0x227C3Cu;
    SET_GPR_U32(ctx, 31, 0x227C44u);
    ctx->pc = 0x227C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C3Cu;
            // 0x227c40: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227D00u;
    if (runtime->hasFunction(0x227D00u)) {
        auto targetFn = runtime->lookupFunction(0x227D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C44u; }
        if (ctx->pc != 0x227C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227D00_0x227d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C44u; }
        if (ctx->pc != 0x227C44u) { return; }
    }
    ctx->pc = 0x227C44u;
label_227c44:
    // 0x227c44: 0xc089fb0  jal         func_227EC0
    ctx->pc = 0x227C44u;
    SET_GPR_U32(ctx, 31, 0x227C4Cu);
    ctx->pc = 0x227C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C44u;
            // 0x227c48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227EC0u;
    if (runtime->hasFunction(0x227EC0u)) {
        auto targetFn = runtime->lookupFunction(0x227EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C4Cu; }
        if (ctx->pc != 0x227C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227EC0_0x227ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C4Cu; }
        if (ctx->pc != 0x227C4Cu) { return; }
    }
    ctx->pc = 0x227C4Cu;
label_227c4c:
    // 0x227c4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x227c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x227c50: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227c50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227c54: 0x24844270  addiu       $a0, $a0, 0x4270
    ctx->pc = 0x227c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17008));
    // 0x227c58: 0x24e74288  addiu       $a3, $a3, 0x4288
    ctx->pc = 0x227c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17032));
    // 0x227c5c: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x227c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x227c60: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227C60u;
    SET_GPR_U32(ctx, 31, 0x227C68u);
    ctx->pc = 0x227C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C60u;
            // 0x227c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C68u; }
        if (ctx->pc != 0x227C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C68u; }
        if (ctx->pc != 0x227C68u) { return; }
    }
    ctx->pc = 0x227C68u;
label_227c68:
    // 0x227c68: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x227c68u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227c6c:
    // 0x227c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227c70: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x227c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x227c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227c78: 0x3e00008  jr          $ra
    ctx->pc = 0x227C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227C78u;
            // 0x227c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227C80u;
label_227c80:
    // 0x227c80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x227c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227c84: 0xc089f40  jal         func_227D00
    ctx->pc = 0x227C84u;
    SET_GPR_U32(ctx, 31, 0x227C8Cu);
    ctx->pc = 0x227C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227C84u;
            // 0x227c88: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227D00u;
    if (runtime->hasFunction(0x227D00u)) {
        auto targetFn = runtime->lookupFunction(0x227D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C8Cu; }
        if (ctx->pc != 0x227C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227D00_0x227d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C8Cu; }
        if (ctx->pc != 0x227C8Cu) { return; }
    }
    ctx->pc = 0x227C8Cu;
label_227c8c:
    // 0x227c8c: 0xc089ee4  jal         func_227B90
    ctx->pc = 0x227C8Cu;
    SET_GPR_U32(ctx, 31, 0x227C94u);
    ctx->pc = 0x227B90u;
    if (runtime->hasFunction(0x227B90u)) {
        auto targetFn = runtime->lookupFunction(0x227B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C94u; }
        if (ctx->pc != 0x227C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227B90_0x227b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227C94u; }
        if (ctx->pc != 0x227C94u) { return; }
    }
    ctx->pc = 0x227C94u;
label_227c94:
    // 0x227c94: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x227c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x227c98: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227c98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227c9c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x227c9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ca0: 0x24844270  addiu       $a0, $a0, 0x4270
    ctx->pc = 0x227ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17008));
    // 0x227ca4: 0x24e742a0  addiu       $a3, $a3, 0x42A0
    ctx->pc = 0x227ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17056));
    // 0x227ca8: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x227ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x227cac: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227CACu;
    SET_GPR_U32(ctx, 31, 0x227CB4u);
    ctx->pc = 0x227CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227CACu;
            // 0x227cb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CB4u; }
        if (ctx->pc != 0x227CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227CB4u; }
        if (ctx->pc != 0x227CB4u) { return; }
    }
    ctx->pc = 0x227CB4u;
label_227cb4:
    // 0x227cb4: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x227CB4u;
    {
        const bool branch_taken_0x227cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227CB4u;
            // 0x227cb8: 0x200782d  daddu       $t7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cb4) {
            ctx->pc = 0x227C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227c6c;
        }
    }
    ctx->pc = 0x227CBCu;
    // 0x227cbc: 0x0  nop
    ctx->pc = 0x227cbcu;
    // NOP
    // 0x227cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x227CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227CC0u;
            // 0x227cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227CC8u;
    ctx->pc = 0x227cc8u;
}
