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

// Function: sub_0025DA20
// Address: 0x25da20 - 0x25dc38
void sub_0025DA20_0x25da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DA20_0x25da20");
#endif

    switch (ctx->pc) {
        case 0x25da60u: goto label_25da60;
        case 0x25dab8u: goto label_25dab8;
        case 0x25dac4u: goto label_25dac4;
        case 0x25db2cu: goto label_25db2c;
        case 0x25db44u: goto label_25db44;
        case 0x25db70u: goto label_25db70;
        case 0x25dba4u: goto label_25dba4;
        case 0x25dbc8u: goto label_25dbc8;
        case 0x25dbe4u: goto label_25dbe4;
        case 0x25dbf4u: goto label_25dbf4;
        case 0x25dc00u: goto label_25dc00;
        default: break;
    }

    ctx->pc = 0x25da20u;

    // 0x25da20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x25da24: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x25da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x25da28: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x25da28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x25da2c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25da2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da30: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x25da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x25da34: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x25da34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da38: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x25da38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x25da3c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25da3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da40: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25da40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25da44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25da44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da48: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x25da4c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x25da4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da50: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x25da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x25da54: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x25da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x25da58: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25DA58u;
    SET_GPR_U32(ctx, 31, 0x25DA60u);
    ctx->pc = 0x25DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA58u;
    // 0x25da5c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25DA58u, 0x25DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA60u;
label_25da60:
    // 0x25da60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25da60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da64: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x25DA64u;
    {
        const bool branch_taken_0x25da64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA64u;
        // 0x25da68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da64) {
            ctx->pc = 0x25DAD0u;
            goto label_25dad0;
        }
    }
    ctx->pc = 0x25DA6Cu;
    // 0x25da6c: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DA6Cu;
    {
        const bool branch_taken_0x25da6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da6c) {
            ctx->pc = 0x25DA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA6Cu;
            // 0x25da70: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DA7Cu;
            goto label_25da7c;
        }
    }
    ctx->pc = 0x25DA74u;
    // 0x25da74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25da74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25da78: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x25da78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_25da7c:
    // 0x25da7c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x25da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25da80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25da84: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x25da84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x25da88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25da88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da8c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x25da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x25da90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25da90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da94: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x25da94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x25da98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25da98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da9c: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x25da9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x25daa0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25daa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25daa4: 0xafb50024  sw          $s5, 0x24($sp)
    ctx->pc = 0x25daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 21));
    // 0x25daa8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x25daa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25daac: 0xafb60018  sw          $s6, 0x18($sp)
    ctx->pc = 0x25daacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
    // 0x25dab0: 0xc09770e  jal         func_25DC38
    ctx->pc = 0x25DAB0u;
    SET_GPR_U32(ctx, 31, 0x25DAB8u);
    ctx->pc = 0x25DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAB0u;
    // 0x25dab4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DC38u, 0x25DAB0u, 0x25DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAB8u;
label_25dab8:
    // 0x25dab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dabc: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25DABCu;
    SET_GPR_U32(ctx, 31, 0x25DAC4u);
    ctx->pc = 0x25DAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DABCu;
    // 0x25dac0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25DABCu, 0x25DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAC4u;
label_25dac4:
    // 0x25dac4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25DAC4u;
    {
        const bool branch_taken_0x25dac4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAC4u;
        // 0x25dac8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dac4) {
            ctx->pc = 0x25DAD0u;
            goto label_25dad0;
        }
    }
    ctx->pc = 0x25DACCu;
    // 0x25dacc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25dad0:
    // 0x25dad0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x25dad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25dad4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x25dad4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25dad8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x25dad8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25dadc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x25dadcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25dae0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x25dae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25dae4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25dae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25dae8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x25dae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25daec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25daecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25daf0: 0x3e00008  jr          $ra
    ctx->pc = 0x25DAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAF0u;
        // 0x25daf4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DAF8u;
    // 0x25daf8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x25daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x25dafc: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x25dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x25db00: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x25db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x25db04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25db04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db08: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x25db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x25db0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25db0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db10: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x25db10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x25db14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25db14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db18: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x25db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x25db1c: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x25db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x25db20: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x25db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x25db24: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25DB24u;
    SET_GPR_U32(ctx, 31, 0x25DB2Cu);
    ctx->pc = 0x25DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB24u;
    // 0x25db28: 0xffb00070  sd          $s0, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25DB24u, 0x25DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB2Cu;
label_25db2c:
    // 0x25db2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25db2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db30: 0x12600035  beqz        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x25DB30u;
    {
        const bool branch_taken_0x25db30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB30u;
        // 0x25db34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db30) {
            ctx->pc = 0x25DC08u;
            goto label_25dc08;
        }
    }
    ctx->pc = 0x25DB38u;
    // 0x25db38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25db38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db3c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x25DB3Cu;
    SET_GPR_U32(ctx, 31, 0x25DB44u);
    ctx->pc = 0x25DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB3Cu;
    // 0x25db40: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x25DB3Cu, 0x25DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB44u;
label_25db44:
    // 0x25db44: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x25db44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25db48: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x25db48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x25db4c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25DB4Cu;
    {
        const bool branch_taken_0x25db4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB4Cu;
        // 0x25db50: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db4c) {
            ctx->pc = 0x25DB84u;
            goto label_25db84;
        }
    }
    ctx->pc = 0x25DB54u;
    // 0x25db54: 0x2c820401  sltiu       $v0, $a0, 0x401
    ctx->pc = 0x25db54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x25db58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DB58u;
    {
        const bool branch_taken_0x25db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25db58) {
            ctx->pc = 0x25DB68u;
            goto label_25db68;
        }
    }
    ctx->pc = 0x25DB60u;
    // 0x25db60: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25DB60u;
    {
        const bool branch_taken_0x25db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB60u;
        // 0x25db64: 0x2411007a  addiu       $s1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db60) {
            ctx->pc = 0x25DBF4u;
            goto label_25dbf4;
        }
    }
    ctx->pc = 0x25DB68u;
label_25db68:
    // 0x25db68: 0xc098552  jal         func_261548
    ctx->pc = 0x25DB68u;
    SET_GPR_U32(ctx, 31, 0x25DB70u);
    ctx->pc = 0x25DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB68u;
    // 0x25db6c: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x25DB68u, 0x25DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB70u;
label_25db70:
    // 0x25db70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25db70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db74: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DB74u;
    {
        const bool branch_taken_0x25db74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB74u;
        // 0x25db78: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db74) {
            ctx->pc = 0x25DB8Cu;
            goto label_25db8c;
        }
    }
    ctx->pc = 0x25DB7Cu;
    // 0x25db7c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25DB7Cu;
    {
        const bool branch_taken_0x25db7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB7Cu;
        // 0x25db80: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db7c) {
            ctx->pc = 0x25DBF4u;
            goto label_25dbf4;
        }
    }
    ctx->pc = 0x25DB84u;
label_25db84:
    // 0x25db84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DB84u;
    {
        const bool branch_taken_0x25db84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB84u;
        // 0x25db88: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db84) {
            ctx->pc = 0x25DB90u;
            goto label_25db90;
        }
    }
    ctx->pc = 0x25DB8Cu;
label_25db8c:
    // 0x25db8c: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x25db8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25db90:
    // 0x25db90: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB90u;
    {
        const bool branch_taken_0x25db90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB90u;
        // 0x25db94: 0x430c0  sll         $a2, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db90) {
            ctx->pc = 0x25DBA4u;
            goto label_25dba4;
        }
    }
    ctx->pc = 0x25DB98u;
    // 0x25db98: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x25db98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25db9c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x25DB9Cu;
    SET_GPR_U32(ctx, 31, 0x25DBA4u);
    ctx->pc = 0x25DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB9Cu;
    // 0x25dba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x25DB9Cu, 0x25DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBA4u;
label_25dba4:
    // 0x25dba4: 0x8fb20008  lw          $s2, 0x8($sp)
    ctx->pc = 0x25dba4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25dba8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25dba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbac: 0xafb10018  sw          $s1, 0x18($sp)
    ctx->pc = 0x25dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 17));
    // 0x25dbb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbb4: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x25dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x25dbb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25dbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25dbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbc0: 0xc09770e  jal         func_25DC38
    ctx->pc = 0x25DBC0u;
    SET_GPR_U32(ctx, 31, 0x25DBC8u);
    ctx->pc = 0x25DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBC0u;
    // 0x25dbc4: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DC38u, 0x25DBC0u, 0x25DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBC8u;
label_25dbc8:
    // 0x25dbc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25dbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbcc: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DBCCu;
    {
        const bool branch_taken_0x25dbcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBCCu;
        // 0x25dbd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbcc) {
            ctx->pc = 0x25DBE4u;
            goto label_25dbe4;
        }
    }
    ctx->pc = 0x25DBD4u;
    // 0x25dbd4: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x25dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x25dbd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25dbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbdc: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x25DBDCu;
    SET_GPR_U32(ctx, 31, 0x25DBE4u);
    ctx->pc = 0x25DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBDCu;
    // 0x25dbe0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x25DBDCu, 0x25DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBE4u;
label_25dbe4:
    // 0x25dbe4: 0x12160004  beq         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DBE4u;
    {
        const bool branch_taken_0x25dbe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x25DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBE4u;
        // 0x25dbe8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbe4) {
            ctx->pc = 0x25DBF8u;
            goto label_25dbf8;
        }
    }
    ctx->pc = 0x25DBECu;
    // 0x25dbec: 0xc098560  jal         func_261580
    ctx->pc = 0x25DBECu;
    SET_GPR_U32(ctx, 31, 0x25DBF4u);
    ctx->pc = 0x25DBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBECu;
    // 0x25dbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25DBECu, 0x25DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBF4u;
label_25dbf4:
    // 0x25dbf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25dbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25dbf8:
    // 0x25dbf8: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25DBF8u;
    SET_GPR_U32(ctx, 31, 0x25DC00u);
    ctx->pc = 0x25DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DBF8u;
    // 0x25dbfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25DBF8u, 0x25DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC00u;
label_25dc00:
    // 0x25dc00: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25DC00u;
    {
        const bool branch_taken_0x25dc00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC00u;
        // 0x25dc04: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc00) {
            ctx->pc = 0x25DC0Cu;
            goto label_25dc0c;
        }
    }
    ctx->pc = 0x25DC08u;
label_25dc08:
    // 0x25dc08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25dc0c:
    // 0x25dc0c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x25dc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25dc10: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x25dc10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25dc14: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x25dc14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25dc18: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x25dc18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25dc1c: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x25dc1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25dc20: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x25dc20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25dc24: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x25dc24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25dc28: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x25dc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25dc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x25DC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC2Cu;
        // 0x25dc30: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DC34u;
    // 0x25dc34: 0x0  nop
    ctx->pc = 0x25dc34u;
    // NOP
    if (ctx->pc == 0x25dc34u) { ctx->pc = 0x25dc38u; }
}
