#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FC20
// Address: 0x26fc20 - 0x26fcc8
void sub_0026FC20_0x26fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FC20_0x26fc20");
#endif

    switch (ctx->pc) {
        case 0x26fc5cu: goto label_26fc5c;
        case 0x26fc80u: goto label_26fc80;
        case 0x26fc98u: goto label_26fc98;
        default: break;
    }

    ctx->pc = 0x26fc20u;

    // 0x26fc20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26fc24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26fc28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26fc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26fc2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26fc2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26fc34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26fc38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26fc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26fc40: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x26fc40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26fc44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC44u;
    {
        const bool branch_taken_0x26fc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC44u;
        // 0x26fc48: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc44) {
            ctx->pc = 0x26FC54u;
            goto label_26fc54;
        }
    }
    ctx->pc = 0x26FC4Cu;
    // 0x26fc4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26FC4Cu;
    {
        const bool branch_taken_0x26fc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC4Cu;
        // 0x26fc50: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc4c) {
            ctx->pc = 0x26FCA8u;
            goto label_26fca8;
        }
    }
    ctx->pc = 0x26FC54u;
label_26fc54:
    // 0x26fc54: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26FC54u;
    SET_GPR_U32(ctx, 31, 0x26FC5Cu);
    ctx->pc = 0x26FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC54u;
    // 0x26fc58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26FC54u, 0x26FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC5Cu;
label_26fc5c:
    // 0x26fc5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26fc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26fc64: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x26fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26fc68: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26fc68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fc6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FC6Cu;
    {
        const bool branch_taken_0x26fc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC6Cu;
        // 0x26fc70: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc6c) {
            ctx->pc = 0x26FC88u;
            goto label_26fc88;
        }
    }
    ctx->pc = 0x26FC74u;
    // 0x26fc74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26fc78: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26FC78u;
    SET_GPR_U32(ctx, 31, 0x26FC80u);
    ctx->pc = 0x26FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC78u;
    // 0x26fc7c: 0x24a59958  addiu       $a1, $a1, -0x66A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26FC78u, 0x26FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC80u;
label_26fc80:
    // 0x26fc80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26FC80u;
    {
        const bool branch_taken_0x26fc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC80u;
        // 0x26fc84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc80) {
            ctx->pc = 0x26FCA8u;
            goto label_26fca8;
        }
    }
    ctx->pc = 0x26FC88u;
label_26fc88:
    // 0x26fc88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26fc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc90: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26FC90u;
    SET_GPR_U32(ctx, 31, 0x26FC98u);
    ctx->pc = 0x26FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC90u;
    // 0x26fc94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26FC90u, 0x26FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC98u;
label_26fc98:
    // 0x26fc98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26fc9c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x26fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x26fca0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x26fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26fca4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x26fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_26fca8:
    // 0x26fca8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26fca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26fcac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26fcacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fcb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26fcb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fcb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26fcb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fcb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fcb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x26FCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCBCu;
        // 0x26fcc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FCC4u;
    // 0x26fcc4: 0x0  nop
    ctx->pc = 0x26fcc4u;
    // NOP
}
