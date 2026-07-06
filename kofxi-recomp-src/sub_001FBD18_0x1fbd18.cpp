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

// Function: sub_001FBD18
// Address: 0x1fbd18 - 0x1fbe40
void sub_001FBD18_0x1fbd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBD18_0x1fbd18");
#endif

    switch (ctx->pc) {
        case 0x1fbd4cu: goto label_1fbd4c;
        case 0x1fbd94u: goto label_1fbd94;
        case 0x1fbdecu: goto label_1fbdec;
        default: break;
    }

    ctx->pc = 0x1fbd18u;

    // 0x1fbd18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fbd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbd1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fbd1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbd24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fbd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fbd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fbd2c: 0x24510ea0  addiu       $s1, $v0, 0xEA0
    ctx->pc = 0x1fbd2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
    // 0x1fbd30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fbd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fbd34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fbd34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fbd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fbd3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fbd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fbd40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fbd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fbd44: 0xc07ef90  jal         func_1FBE40
    ctx->pc = 0x1FBD44u;
    SET_GPR_U32(ctx, 31, 0x1FBD4Cu);
    ctx->pc = 0x1FBD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD44u;
    // 0x1fbd48: 0x24530d88  addiu       $s3, $v0, 0xD88 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE40u, 0x1FBD44u, 0x1FBD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD4Cu;
label_1fbd4c:
    // 0x1fbd4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1fbd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbd54: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FBD54u;
    {
        const bool branch_taken_0x1fbd54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD54u;
        // 0x1fbd58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd54) {
            ctx->pc = 0x1FBDA4u;
            goto label_1fbda4;
        }
    }
    ctx->pc = 0x1FBD5Cu;
    // 0x1fbd5c: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x1fbd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x1fbd60: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBD60u;
    {
        const bool branch_taken_0x1fbd60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fbd60) {
            ctx->pc = 0x1FBD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBD60u;
            // 0x1fbd64: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBD80u;
            goto label_1fbd80;
        }
    }
    ctx->pc = 0x1FBD68u;
    // 0x1fbd68: 0x8e630144  lw          $v1, 0x144($s3)
    ctx->pc = 0x1fbd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x1fbd6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fbd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fbd70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbd74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FBD74u;
    {
        const bool branch_taken_0x1fbd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD74u;
        // 0x1fbd78: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd74) {
            ctx->pc = 0x1FBDA0u;
            goto label_1fbda0;
        }
    }
    ctx->pc = 0x1FBD7Cu;
    // 0x1fbd7c: 0x0  nop
    ctx->pc = 0x1fbd7cu;
    // NOP
label_1fbd80:
    // 0x1fbd80: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBD80u;
    {
        const bool branch_taken_0x1fbd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd80) {
            ctx->pc = 0x1FBD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBD80u;
            // 0x1fbd84: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBDA4u;
            goto label_1fbda4;
        }
    }
    ctx->pc = 0x1FBD88u;
    // 0x1fbd88: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x1fbd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1fbd8c: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FBD8Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD94u);
    ctx->pc = 0x1FBD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD8Cu;
    // 0x1fbd90: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1FBD8Cu, 0x1FBD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD94u;
label_1fbd94:
    // 0x1fbd94: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fbd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fbd98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fbd9c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1fbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1fbda0:
    // 0x1fbda0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1fbda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fbda4:
    // 0x1fbda4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbda8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbdac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbdacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbdb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fbdb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbdb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fbdb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbdb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fbdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fbdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDBCu;
        // 0x1fbdc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBDC4u;
    // 0x1fbdc4: 0x0  nop
    ctx->pc = 0x1fbdc4u;
    // NOP
    // 0x1fbdc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbdcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbdd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbdd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbdd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fbdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fbdd8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fbdd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbddc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fbddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fbde0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fbde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fbde4: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FBDE4u;
    SET_GPR_U32(ctx, 31, 0x1FBDECu);
    ctx->pc = 0x1FBDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDE4u;
    // 0x1fbde8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FBDE4u, 0x1FBDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDECu;
label_1fbdec:
    // 0x1fbdec: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fbdecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fbdf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fbdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbdf4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fbdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbdf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBDF8u;
    {
        const bool branch_taken_0x1fbdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDF8u;
        // 0x1fbdfc: 0x34a50127  ori         $a1, $a1, 0x127 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdf8) {
            ctx->pc = 0x1FBE20u;
            goto label_1fbe20;
        }
    }
    ctx->pc = 0x1FBE00u;
    // 0x1fbe00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbe00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fbe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbe08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbe0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbe0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbe10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fbe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbe14: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FBE14u;
    ctx->pc = 0x1FBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE14u;
    // 0x1fbe18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FBE1Cu;
    // 0x1fbe1c: 0x0  nop
    ctx->pc = 0x1fbe1cu;
    // NOP
label_1fbe20:
    // 0x1fbe20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fbe20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbe24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbe28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbe28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbe2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbe30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fbe30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbe34: 0x807ef90  j           func_1FBE40
    ctx->pc = 0x1FBE34u;
    ctx->pc = 0x1FBE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE34u;
    // 0x1fbe38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    sub_001FBE40_0x1fbe40(rdram, ctx, runtime); return;
    ctx->pc = 0x1FBE3Cu;
    // 0x1fbe3c: 0x0  nop
    ctx->pc = 0x1fbe3cu;
    // NOP
    if (ctx->pc == 0x1fbe3cu) { ctx->pc = 0x1fbe40u; }
}
