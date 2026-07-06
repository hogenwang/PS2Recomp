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

// Function: sub_002ECE10
// Address: 0x2ece10 - 0x2ed2f0
void sub_002ECE10_0x2ece10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECE10_0x2ece10");
#endif

    switch (ctx->pc) {
        case 0x2ece8cu: goto label_2ece8c;
        case 0x2ece98u: goto label_2ece98;
        case 0x2ecea4u: goto label_2ecea4;
        case 0x2ececcu: goto label_2ececc;
        case 0x2ecee4u: goto label_2ecee4;
        case 0x2eceecu: goto label_2eceec;
        case 0x2ecef0u: goto label_2ecef0;
        case 0x2ecef8u: goto label_2ecef8;
        case 0x2ecefcu: goto label_2ecefc;
        case 0x2ecfa0u: goto label_2ecfa0;
        case 0x2ecfb0u: goto label_2ecfb0;
        case 0x2ecfecu: goto label_2ecfec;
        case 0x2ed000u: goto label_2ed000;
        case 0x2ed01cu: goto label_2ed01c;
        case 0x2ed030u: goto label_2ed030;
        case 0x2ed054u: goto label_2ed054;
        case 0x2ed05cu: goto label_2ed05c;
        case 0x2ed06cu: goto label_2ed06c;
        case 0x2ed07cu: goto label_2ed07c;
        case 0x2ed084u: goto label_2ed084;
        case 0x2ed098u: goto label_2ed098;
        case 0x2ed0d4u: goto label_2ed0d4;
        case 0x2ed0dcu: goto label_2ed0dc;
        case 0x2ed0ecu: goto label_2ed0ec;
        case 0x2ed104u: goto label_2ed104;
        case 0x2ed124u: goto label_2ed124;
        case 0x2ed134u: goto label_2ed134;
        case 0x2ed160u: goto label_2ed160;
        case 0x2ed16cu: goto label_2ed16c;
        case 0x2ed188u: goto label_2ed188;
        case 0x2ed1d0u: goto label_2ed1d0;
        case 0x2ed210u: goto label_2ed210;
        case 0x2ed290u: goto label_2ed290;
        case 0x2ed2d0u: goto label_2ed2d0;
        case 0x2ed2e4u: goto label_2ed2e4;
        default: break;
    }

    ctx->pc = 0x2ece10u;

    // 0x2ece10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ece10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ece14: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x2ece14u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x2ece18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ece18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ece1c: 0x256ceca8  addiu       $t4, $t3, -0x1358
    ctx->pc = 0x2ece1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294962344));
    // 0x2ece20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ece20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ece24: 0x340efffe  ori         $t6, $zero, 0xFFFE
    ctx->pc = 0x2ece24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x2ece28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ece28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ece2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ece2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ece30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ece34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ece34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ece38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ece3c: 0x958f0020  lhu         $t7, 0x20($t4)
    ctx->pc = 0x2ece3cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x2ece40: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2ece40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2ece44: 0x31edffff  andi        $t5, $t7, 0xFFFF
    ctx->pc = 0x2ece44u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x2ece48: 0x1cd702b  sltu        $t6, $t6, $t5
    ctx->pc = 0x2ece48u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2ece4c: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECE4Cu;
    {
        const bool branch_taken_0x2ece4c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE4Cu;
        // 0x2ece50: 0xa58f0020  sh          $t7, 0x20($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 32), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece4c) {
            ctx->pc = 0x2ECE58u;
            goto label_2ece58;
        }
    }
    ctx->pc = 0x2ECE54u;
    // 0x2ece54: 0xa5800020  sh          $zero, 0x20($t4)
    ctx->pc = 0x2ece54u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 32), (uint16_t)GPR_U32(ctx, 0));
label_2ece58:
    // 0x2ece58: 0x8d6eeca8  lw          $t6, -0x1358($t3)
    ctx->pc = 0x2ece58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294962344)));
    // 0x2ece5c: 0x25cf0001  addiu       $t7, $t6, 0x1
    ctx->pc = 0x2ece5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2ece60: 0x2def0003  sltiu       $t7, $t7, 0x3
    ctx->pc = 0x2ece60u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ece64: 0x15e00044  bnez        $t7, . + 4 + (0x44 << 2)
    ctx->pc = 0x2ECE64u;
    {
        const bool branch_taken_0x2ece64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE64u;
        // 0x2ece68: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece64) {
            ctx->pc = 0x2ECF78u;
            goto label_2ecf78;
        }
    }
    ctx->pc = 0x2ECE6Cu;
    // 0x2ece6c: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x2ece6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ece70: 0x11cf0040  beq         $t6, $t7, . + 4 + (0x40 << 2)
    ctx->pc = 0x2ECE70u;
    {
        const bool branch_taken_0x2ece70 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ECE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE70u;
        // 0x2ece74: 0x240f000a  addiu       $t7, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece70) {
            ctx->pc = 0x2ECF74u;
            goto label_2ecf74;
        }
    }
    ctx->pc = 0x2ECE78u;
    // 0x2ece78: 0x11cf003f  beq         $t6, $t7, . + 4 + (0x3F << 2)
    ctx->pc = 0x2ECE78u;
    {
        const bool branch_taken_0x2ece78 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ECE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE78u;
        // 0x2ece7c: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece78) {
            ctx->pc = 0x2ECF78u;
            goto label_2ecf78;
        }
    }
    ctx->pc = 0x2ECE80u;
    // 0x2ece80: 0xad800060  sw          $zero, 0x60($t4)
    ctx->pc = 0x2ece80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 0));
    // 0x2ece84: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ECE84u;
    SET_GPR_U32(ctx, 31, 0x2ECE8Cu);
    ctx->pc = 0x2ECE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE84u;
    // 0x2ece88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2ECE84u, 0x2ECE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE8Cu;
label_2ece8c:
    // 0x2ece8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECE8Cu;
    {
        const bool branch_taken_0x2ece8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE8Cu;
        // 0x2ece90: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece8c) {
            ctx->pc = 0x2ECEB0u;
            goto label_2eceb0;
        }
    }
    ctx->pc = 0x2ECE94u;
    // 0x2ece94: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2ece94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2ece98:
    // 0x2ece98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ece98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece9c: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2ECE9Cu;
    SET_GPR_U32(ctx, 31, 0x2ECEA4u);
    ctx->pc = 0x2ECEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE9Cu;
    // 0x2ecea0: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2ECE9Cu, 0x2ECEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEA4u;
label_2ecea4:
    // 0x2ecea4: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2ECEA4u;
    {
        const bool branch_taken_0x2ecea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecea4) {
            ctx->pc = 0x2ECEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECEA4u;
            // 0x2ecea8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ece98;
        }
    }
    ctx->pc = 0x2ECEACu;
    // 0x2eceac: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eceacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2eceb0:
    // 0x2eceb0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2eceb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eceb4: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2eceb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2eceb8: 0x8deeeca8  lw          $t6, -0x1358($t7)
    ctx->pc = 0x2eceb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ecebc: 0x15d10036  bne         $t6, $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2ECEBCu;
    {
        const bool branch_taken_0x2ecebc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ecebc) {
            ctx->pc = 0x2ECF98u;
            goto label_2ecf98;
        }
    }
    ctx->pc = 0x2ECEC4u;
    // 0x2ecec4: 0xc0bb786  jal         func_2EDE18
    ctx->pc = 0x2ECEC4u;
    SET_GPR_U32(ctx, 31, 0x2ECECCu);
    ctx->pc = 0x2EDE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE18u, 0x2ECEC4u, 0x2ECECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECECCu;
label_2ececc:
    // 0x2ececc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ECECCu;
    {
        const bool branch_taken_0x2ececc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECECCu;
        // 0x2eced0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ececc) {
            ctx->pc = 0x2ECEF8u;
            goto label_2ecef8;
        }
    }
    ctx->pc = 0x2ECED4u;
    // 0x2eced4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2eced4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2eced8: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2eced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ecedc: 0x250809a8  addiu       $t0, $t0, 0x9A8
    ctx->pc = 0x2ecedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2472));
    // 0x2ecee0: 0x240503f6  addiu       $a1, $zero, 0x3F6
    ctx->pc = 0x2ecee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
label_2ecee4:
    // 0x2ecee4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ecee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ecee8: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x2ecee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_2eceec:
    // 0x2eceec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eceecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecef0:
    // 0x2ecef0: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2ECEF0u;
    SET_GPR_U32(ctx, 31, 0x2ECEF8u);
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2ECEF0u, 0x2ECEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEF8u;
label_2ecef8:
    // 0x2ecef8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ecef8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ecefc:
    // 0x2ecefc: 0x25edeca8  addiu       $t5, $t7, -0x1358
    ctx->pc = 0x2ecefcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ecf00: 0x8dae0050  lw          $t6, 0x50($t5)
    ctx->pc = 0x2ecf00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 80)));
    // 0x2ecf04: 0x11c00013  beqz        $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECF04u;
    {
        const bool branch_taken_0x2ecf04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF04u;
        // 0x2ecf08: 0x25cf0001  addiu       $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf04) {
            ctx->pc = 0x2ECF54u;
            goto label_2ecf54;
        }
    }
    ctx->pc = 0x2ECF0Cu;
    // 0x2ecf0c: 0x8da90384  lw          $t1, 0x384($t5)
    ctx->pc = 0x2ecf0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 900)));
    // 0x2ecf10: 0x1c9702b  sltu        $t6, $t6, $t1
    ctx->pc = 0x2ecf10u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ecf14: 0x15c0000f  bnez        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x2ECF14u;
    {
        const bool branch_taken_0x2ecf14 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF14u;
        // 0x2ecf18: 0xadaf0050  sw          $t7, 0x50($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 80), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf14) {
            ctx->pc = 0x2ECF54u;
            goto label_2ecf54;
        }
    }
    ctx->pc = 0x2ECF1Cu;
    // 0x2ecf1c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ecf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ecf20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecf24: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ecf24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ecf28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ecf28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecf2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ecf2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecf30: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ecf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ecf34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ecf34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ecf38: 0x250809c8  addiu       $t0, $t0, 0x9C8
    ctx->pc = 0x2ecf38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2504));
    // 0x2ecf3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ecf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecf40: 0x240504a2  addiu       $a1, $zero, 0x4A2
    ctx->pc = 0x2ecf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1186));
    // 0x2ecf44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ecf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ecf48: 0x2407d8ec  addiu       $a3, $zero, -0x2714
    ctx->pc = 0x2ecf48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957292));
    // 0x2ecf4c: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2ECF4Cu;
    ctx->pc = 0x2ECF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF4Cu;
    // 0x2ecf50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2ECF54u;
label_2ecf54:
    // 0x2ecf54: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF54u;
    {
        const bool branch_taken_0x2ecf54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF54u;
        // 0x2ecf58: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf54) {
            ctx->pc = 0x2ECF64u;
            goto label_2ecf64;
        }
    }
    ctx->pc = 0x2ECF5Cu;
    // 0x2ecf5c: 0x8deeed08  lw          $t6, -0x12F8($t7)
    ctx->pc = 0x2ecf5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962440)));
    // 0x2ecf60: 0xae4e0000  sw          $t6, 0x0($s2)
    ctx->pc = 0x2ecf60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 14));
label_2ecf64:
    // 0x2ecf64: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF64u;
    {
        const bool branch_taken_0x2ecf64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF64u;
        // 0x2ecf68: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf64) {
            ctx->pc = 0x2ECF74u;
            goto label_2ecf74;
        }
    }
    ctx->pc = 0x2ECF6Cu;
    // 0x2ecf6c: 0x8deeecac  lw          $t6, -0x1354($t7)
    ctx->pc = 0x2ecf6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962348)));
    // 0x2ecf70: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x2ecf70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
label_2ecf74:
    // 0x2ecf74: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ecf74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ecf78:
    // 0x2ecf78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecf78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecf7c: 0x8de2eca8  lw          $v0, -0x1358($t7)
    ctx->pc = 0x2ecf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ecf80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ecf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecf84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ecf84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecf88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ecf88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ecf8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ecf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecf90: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF90u;
        // 0x2ecf94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF98u;
label_2ecf98:
    // 0x2ecf98: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2ECF98u;
    SET_GPR_U32(ctx, 31, 0x2ECFA0u);
    ctx->pc = 0x2ECF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF98u;
    // 0x2ecf9c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2ECF98u, 0x2ECFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFA0u;
label_2ecfa0:
    // 0x2ecfa0: 0x50510007  beql        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ECFA0u;
    {
        const bool branch_taken_0x2ecfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2ecfa0) {
            ctx->pc = 0x2ECFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFA0u;
            // 0x2ecfa4: 0x8e0f0010  lw          $t7, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECFC0u;
            goto label_2ecfc0;
        }
    }
    ctx->pc = 0x2ECFA8u;
    // 0x2ecfa8: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2ECFA8u;
    SET_GPR_U32(ctx, 31, 0x2ECFB0u);
    ctx->pc = 0x2ECFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFA8u;
    // 0x2ecfac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2ECFA8u, 0x2ECFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFB0u;
label_2ecfb0:
    // 0x2ecfb0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2ecfb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecfb4: 0x144f0006  bne         $v0, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECFB4u;
    {
        const bool branch_taken_0x2ecfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2ECFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFB4u;
        // 0x2ecfb8: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfb4) {
            ctx->pc = 0x2ECFD0u;
            goto label_2ecfd0;
        }
    }
    ctx->pc = 0x2ECFBCu;
    // 0x2ecfbc: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x2ecfbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ecfc0:
    // 0x2ecfc0: 0x8dee1050  lw          $t6, 0x1050($t7)
    ctx->pc = 0x2ecfc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4176)));
    // 0x2ecfc4: 0x11c000bb  beqz        $t6, . + 4 + (0xBB << 2)
    ctx->pc = 0x2ECFC4u;
    {
        const bool branch_taken_0x2ecfc4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECFC4u;
        // 0x2ecfc8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecfc4) {
            ctx->pc = 0x2ED2B4u;
            goto label_2ed2b4;
        }
    }
    ctx->pc = 0x2ECFCCu;
    // 0x2ecfcc: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ecfccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ecfd0:
    // 0x2ecfd0: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ecfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ecfd4: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x2ecfd4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ecfd8: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x2ecfd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ecfdc: 0x51cf0017  beql        $t6, $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x2ECFDCu;
    {
        const bool branch_taken_0x2ecfdc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x2ecfdc) {
            ctx->pc = 0x2ECFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFDCu;
            // 0x2ecfe0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED03Cu;
            goto label_2ed03c;
        }
    }
    ctx->pc = 0x2ECFE4u;
    // 0x2ecfe4: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2ECFE4u;
    SET_GPR_U32(ctx, 31, 0x2ECFECu);
    ctx->pc = 0x2ECFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFE4u;
    // 0x2ecfe8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2ECFE4u, 0x2ECFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFECu;
label_2ecfec:
    // 0x2ecfec: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ecfecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ecff0: 0x504f0012  beql        $v0, $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ECFF0u;
    {
        const bool branch_taken_0x2ecff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x2ecff0) {
            ctx->pc = 0x2ECFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFF0u;
            // 0x2ecff4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED03Cu;
            goto label_2ed03c;
        }
    }
    ctx->pc = 0x2ECFF8u;
    // 0x2ecff8: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2ECFF8u;
    SET_GPR_U32(ctx, 31, 0x2ED000u);
    ctx->pc = 0x2ECFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFF8u;
    // 0x2ecffc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245E8u, 0x2ECFF8u, 0x2ED000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED000u;
label_2ed000:
    // 0x2ed000: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2ed000u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed004: 0x504f0006  beql        $v0, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED004u;
    {
        const bool branch_taken_0x2ed004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x2ed004) {
            ctx->pc = 0x2ED008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED004u;
            // 0x2ed008: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED020u;
            goto label_2ed020;
        }
    }
    ctx->pc = 0x2ED00Cu;
    // 0x2ed00c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ed00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ed010: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ed010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed014: 0xc089144  jal         func_224510
    ctx->pc = 0x2ED014u;
    SET_GPR_U32(ctx, 31, 0x2ED01Cu);
    ctx->pc = 0x2ED018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED014u;
    // 0x2ed018: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x2ED014u, 0x2ED01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED01Cu;
label_2ed01c:
    // 0x2ed01c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2ed020:
    // 0x2ed020: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed020u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed024: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed028: 0x250809d8  addiu       $t0, $t0, 0x9D8
    ctx->pc = 0x2ed028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2520));
    // 0x2ed02c: 0x24050416  addiu       $a1, $zero, 0x416
    ctx->pc = 0x2ed02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
label_2ed030:
    // 0x2ed030: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed034: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x2ED034u;
    {
        const bool branch_taken_0x2ed034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED034u;
        // 0x2ed038: 0x24078acd  addiu       $a3, $zero, -0x7533 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed034) {
            ctx->pc = 0x2ECEECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eceec;
        }
    }
    ctx->pc = 0x2ED03Cu;
label_2ed03c:
    // 0x2ed03c: 0x240f0006  addiu       $t7, $zero, 0x6
    ctx->pc = 0x2ed03cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ed040: 0x8e0eeca8  lw          $t6, -0x1358($s0)
    ctx->pc = 0x2ed040u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962344)));
    // 0x2ed044: 0x15cf0021  bne         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x2ED044u;
    {
        const bool branch_taken_0x2ed044 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2ED048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED044u;
        // 0x2ed048: 0x2611eca8  addiu       $s1, $s0, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed044) {
            ctx->pc = 0x2ED0CCu;
            goto label_2ed0cc;
        }
    }
    ctx->pc = 0x2ED04Cu;
    // 0x2ed04c: 0xc0bba16  jal         func_2EE858
    ctx->pc = 0x2ED04Cu;
    SET_GPR_U32(ctx, 31, 0x2ED054u);
    ctx->pc = 0x2EE858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE858u, 0x2ED04Cu, 0x2ED054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED054u;
label_2ed054:
    // 0x2ed054: 0xc0bb786  jal         func_2EDE18
    ctx->pc = 0x2ED054u;
    SET_GPR_U32(ctx, 31, 0x2ED05Cu);
    ctx->pc = 0x2EDE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE18u, 0x2ED054u, 0x2ED05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED05Cu;
label_2ed05c:
    // 0x2ed05c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ED05Cu;
    {
        const bool branch_taken_0x2ed05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED05Cu;
        // 0x2ed060: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed05c) {
            ctx->pc = 0x2ED0B8u;
            goto label_2ed0b8;
        }
    }
    ctx->pc = 0x2ED064u;
    // 0x2ed064: 0xc0bbc74  jal         func_2EF1D0
    ctx->pc = 0x2ED064u;
    SET_GPR_U32(ctx, 31, 0x2ED06Cu);
    ctx->pc = 0x2EF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF1D0u, 0x2ED064u, 0x2ED06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED06Cu;
label_2ed06c:
    // 0x2ed06c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED06Cu;
    {
        const bool branch_taken_0x2ed06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED06Cu;
        // 0x2ed070: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed06c) {
            ctx->pc = 0x2ED0A4u;
            goto label_2ed0a4;
        }
    }
    ctx->pc = 0x2ED074u;
    // 0x2ed074: 0xc0bbf3a  jal         func_2EFCE8
    ctx->pc = 0x2ED074u;
    SET_GPR_U32(ctx, 31, 0x2ED07Cu);
    ctx->pc = 0x2EFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCE8u, 0x2ED074u, 0x2ED07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED07Cu;
label_2ed07c:
    // 0x2ed07c: 0x441ff9e  bgez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2ED07Cu;
    {
        const bool branch_taken_0x2ed07c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2ED080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED07Cu;
        // 0x2ed080: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed07c) {
            ctx->pc = 0x2ECEF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecef8;
        }
    }
    ctx->pc = 0x2ED084u;
label_2ed084:
    // 0x2ed084: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed084u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed088: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed08c: 0x250809f0  addiu       $t0, $t0, 0x9F0
    ctx->pc = 0x2ed08cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2544));
    // 0x2ed090: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ed090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed094: 0x24050435  addiu       $a1, $zero, 0x435
    ctx->pc = 0x2ed094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1077));
label_2ed098:
    // 0x2ed098: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed09c: 0x1000ff94  b           . + 4 + (-0x6C << 2)
    ctx->pc = 0x2ED09Cu;
    {
        const bool branch_taken_0x2ed09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED09Cu;
        // 0x2ed0a0: 0x2407d8f0  addiu       $a3, $zero, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed09c) {
            ctx->pc = 0x2ECEF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecef0;
        }
    }
    ctx->pc = 0x2ED0A4u;
label_2ed0a4:
    // 0x2ed0a4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed0a8: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed0ac: 0x25080a10  addiu       $t0, $t0, 0xA10
    ctx->pc = 0x2ed0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2576));
    // 0x2ed0b0: 0x1000ff8c  b           . + 4 + (-0x74 << 2)
    ctx->pc = 0x2ED0B0u;
    {
        const bool branch_taken_0x2ed0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0B0u;
        // 0x2ed0b4: 0x2405042e  addiu       $a1, $zero, 0x42E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0b0) {
            ctx->pc = 0x2ECEE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecee4;
        }
    }
    ctx->pc = 0x2ED0B8u;
label_2ed0b8:
    // 0x2ed0b8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed0bc: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed0c0: 0x250809a8  addiu       $t0, $t0, 0x9A8
    ctx->pc = 0x2ed0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2472));
    // 0x2ed0c4: 0x1000ff87  b           . + 4 + (-0x79 << 2)
    ctx->pc = 0x2ED0C4u;
    {
        const bool branch_taken_0x2ed0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0C4u;
        // 0x2ed0c8: 0x24050429  addiu       $a1, $zero, 0x429 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0c4) {
            ctx->pc = 0x2ECEE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecee4;
        }
    }
    ctx->pc = 0x2ED0CCu;
label_2ed0cc:
    // 0x2ed0cc: 0xc0bba16  jal         func_2EE858
    ctx->pc = 0x2ED0CCu;
    SET_GPR_U32(ctx, 31, 0x2ED0D4u);
    ctx->pc = 0x2EE858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE858u, 0x2ED0CCu, 0x2ED0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0D4u;
label_2ed0d4:
    // 0x2ed0d4: 0xc0bb786  jal         func_2EDE18
    ctx->pc = 0x2ED0D4u;
    SET_GPR_U32(ctx, 31, 0x2ED0DCu);
    ctx->pc = 0x2EDE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE18u, 0x2ED0D4u, 0x2ED0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0DCu;
label_2ed0dc:
    // 0x2ed0dc: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2ED0DCu;
    {
        const bool branch_taken_0x2ed0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0DCu;
        // 0x2ed0e0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0dc) {
            ctx->pc = 0x2ED2A0u;
            goto label_2ed2a0;
        }
    }
    ctx->pc = 0x2ED0E4u;
    // 0x2ed0e4: 0xc0bbc74  jal         func_2EF1D0
    ctx->pc = 0x2ED0E4u;
    SET_GPR_U32(ctx, 31, 0x2ED0ECu);
    ctx->pc = 0x2EF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF1D0u, 0x2ED0E4u, 0x2ED0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED0ECu;
label_2ed0ec:
    // 0x2ed0ec: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2ED0ECu;
    {
        const bool branch_taken_0x2ed0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0ECu;
        // 0x2ed0f0: 0x8e0eeca8  lw          $t6, -0x1358($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0ec) {
            ctx->pc = 0x2ED288u;
            goto label_2ed288;
        }
    }
    ctx->pc = 0x2ED0F4u;
    // 0x2ed0f4: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ed0f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed0f8: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2ED0F8u;
    {
        const bool branch_taken_0x2ed0f8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x2ed0f8) {
            ctx->pc = 0x2ED12Cu;
            goto label_2ed12c;
        }
    }
    ctx->pc = 0x2ED100u;
    // 0x2ed100: 0x8e2e004c  lw          $t6, 0x4C($s1)
    ctx->pc = 0x2ed100u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2ed104:
    // 0x2ed104: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x2ed104u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed108: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED108u;
    {
        const bool branch_taken_0x2ed108 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED108u;
        // 0x2ed10c: 0xe7042  srl         $t6, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed108) {
            ctx->pc = 0x2ED12Cu;
            goto label_2ed12c;
        }
    }
    ctx->pc = 0x2ED110u;
    // 0x2ed110: 0x962f0020  lhu         $t7, 0x20($s1)
    ctx->pc = 0x2ed110u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ed114: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED114u;
    {
        const bool branch_taken_0x2ed114 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed114) {
            ctx->pc = 0x2ED118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED114u;
            // 0x2ed118: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED11Cu;
            goto label_2ed11c;
        }
    }
    ctx->pc = 0x2ED11Cu;
label_2ed11c:
    // 0x2ed11c: 0x1ee001b  divu        $zero, $t7, $t6
    ctx->pc = 0x2ed11cu;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x2ed120: 0x6810  mfhi        $t5
    ctx->pc = 0x2ed120u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2ed124:
    // 0x2ed124: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED124u;
    {
        const bool branch_taken_0x2ed124 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED124u;
        // 0x2ed128: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed124) {
            ctx->pc = 0x2ED13Cu;
            goto label_2ed13c;
        }
    }
    ctx->pc = 0x2ED12Cu;
label_2ed12c:
    // 0x2ed12c: 0xc0bbf3a  jal         func_2EFCE8
    ctx->pc = 0x2ED12Cu;
    SET_GPR_U32(ctx, 31, 0x2ED134u);
    ctx->pc = 0x2EFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCE8u, 0x2ED12Cu, 0x2ED134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED134u;
label_2ed134:
    // 0x2ed134: 0x440004d  bltz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2ED134u;
    {
        const bool branch_taken_0x2ed134 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ED138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED134u;
        // 0x2ed138: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed134) {
            ctx->pc = 0x2ED26Cu;
            goto label_2ed26c;
        }
    }
    ctx->pc = 0x2ED13Cu;
label_2ed13c:
    // 0x2ed13c: 0x240e0007  addiu       $t6, $zero, 0x7
    ctx->pc = 0x2ed13cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed140: 0x8dedeca8  lw          $t5, -0x1358($t7)
    ctx->pc = 0x2ed140u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962344)));
    // 0x2ed144: 0x15ae0020  bne         $t5, $t6, . + 4 + (0x20 << 2)
    ctx->pc = 0x2ED144u;
    {
        const bool branch_taken_0x2ed144 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x2ED148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED144u;
        // 0x2ed148: 0x25ececa8  addiu       $t4, $t7, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed144) {
            ctx->pc = 0x2ED1C8u;
            goto label_2ed1c8;
        }
    }
    ctx->pc = 0x2ED14Cu;
    // 0x2ed14c: 0x8d8f0044  lw          $t7, 0x44($t4)
    ctx->pc = 0x2ed14cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x2ed150: 0x51e00026  beql        $t7, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2ED150u;
    {
        const bool branch_taken_0x2ed150 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed150) {
            ctx->pc = 0x2ED154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED150u;
            // 0x2ed154: 0x8d8e037c  lw          $t6, 0x37C($t4) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED1ECu;
            goto label_2ed1ec;
        }
    }
    ctx->pc = 0x2ED158u;
    // 0x2ed158: 0xc0bbf64  jal         func_2EFD90
    ctx->pc = 0x2ED158u;
    SET_GPR_U32(ctx, 31, 0x2ED160u);
    ctx->pc = 0x2EFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFD90u, 0x2ED158u, 0x2ED160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED160u;
label_2ed160:
    // 0x2ed160: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED160u;
    {
        const bool branch_taken_0x2ed160 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2ED164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED160u;
        // 0x2ed164: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed160) {
            ctx->pc = 0x2ED18Cu;
            goto label_2ed18c;
        }
    }
    ctx->pc = 0x2ED168u;
    // 0x2ed168: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2ed16c:
    // 0x2ed16c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed16cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed170: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed174: 0x25080a30  addiu       $t0, $t0, 0xA30
    ctx->pc = 0x2ed174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2608));
    // 0x2ed178: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ed178u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed17c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x2ED17Cu;
    {
        const bool branch_taken_0x2ed17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED17Cu;
        // 0x2ed180: 0x24050465  addiu       $a1, $zero, 0x465 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed17c) {
            ctx->pc = 0x2ED098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed098;
        }
    }
    ctx->pc = 0x2ED184u;
    // 0x2ed184: 0x0  nop
    ctx->pc = 0x2ed184u;
    // NOP
label_2ed188:
    // 0x2ed188: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ed188u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2ed18c:
    // 0x2ed18c: 0x25ececa8  addiu       $t4, $t7, -0x1358
    ctx->pc = 0x2ed18cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ed190: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x2ed190u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2ed194: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ed194u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed198: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED198u;
    {
        const bool branch_taken_0x2ed198 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED198u;
        // 0x2ed19c: 0x340efffe  ori         $t6, $zero, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed198) {
            ctx->pc = 0x2ED1C8u;
            goto label_2ed1c8;
        }
    }
    ctx->pc = 0x2ED1A0u;
    // 0x2ed1a0: 0x958f0018  lhu         $t7, 0x18($t4)
    ctx->pc = 0x2ed1a0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x2ed1a4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2ed1a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2ed1a8: 0x31edffff  andi        $t5, $t7, 0xFFFF
    ctx->pc = 0x2ed1a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x2ed1ac: 0x1cd702b  sltu        $t6, $t6, $t5
    ctx->pc = 0x2ed1acu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2ed1b0: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED1B0u;
    {
        const bool branch_taken_0x2ed1b0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1B0u;
        // 0x2ed1b4: 0xa58f0018  sh          $t7, 0x18($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 24), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1b0) {
            ctx->pc = 0x2ED1C8u;
            goto label_2ed1c8;
        }
    }
    ctx->pc = 0x2ED1B8u;
    // 0x2ed1b8: 0x958f001a  lhu         $t7, 0x1A($t4)
    ctx->pc = 0x2ed1b8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 26)));
    // 0x2ed1bc: 0xa5800018  sh          $zero, 0x18($t4)
    ctx->pc = 0x2ed1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ed1c0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2ed1c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2ed1c4: 0xa58f001a  sh          $t7, 0x1A($t4)
    ctx->pc = 0x2ed1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 26), (uint16_t)GPR_U32(ctx, 15));
label_2ed1c8:
    // 0x2ed1c8: 0xc0bc0e6  jal         func_2F0398
    ctx->pc = 0x2ED1C8u;
    SET_GPR_U32(ctx, 31, 0x2ED1D0u);
    ctx->pc = 0x2F0398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0398u, 0x2ED1C8u, 0x2ED1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED1D0u;
label_2ed1d0:
    // 0x2ed1d0: 0x1440ff49  bnez        $v0, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x2ED1D0u;
    {
        const bool branch_taken_0x2ed1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1D0u;
        // 0x2ed1d4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1d0) {
            ctx->pc = 0x2ECEF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecef8;
        }
    }
    ctx->pc = 0x2ED1D8u;
    // 0x2ed1d8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed1d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed1dc: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed1e0: 0x25080a30  addiu       $t0, $t0, 0xA30
    ctx->pc = 0x2ed1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2608));
    // 0x2ed1e4: 0x1000ff3f  b           . + 4 + (-0xC1 << 2)
    ctx->pc = 0x2ED1E4u;
    {
        const bool branch_taken_0x2ed1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1E4u;
        // 0x2ed1e8: 0x24050498  addiu       $a1, $zero, 0x498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1e4) {
            ctx->pc = 0x2ECEE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecee4;
        }
    }
    ctx->pc = 0x2ED1ECu;
label_2ed1ec:
    // 0x2ed1ec: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x2ed1ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed1f0: 0x15cf0013  bne         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ED1F0u;
    {
        const bool branch_taken_0x2ed1f0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2ED1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1F0u;
        // 0x2ed1f4: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1f0) {
            ctx->pc = 0x2ED240u;
            goto label_2ed240;
        }
    }
    ctx->pc = 0x2ED1F8u;
    // 0x2ed1f8: 0x8d8e0010  lw          $t6, 0x10($t4)
    ctx->pc = 0x2ed1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2ed1fc: 0x8dcf0010  lw          $t7, 0x10($t6)
    ctx->pc = 0x2ed1fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2ed200: 0x25effffb  addiu       $t7, $t7, -0x5
    ctx->pc = 0x2ed200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967291));
    // 0x2ed204: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x2ed204u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed208: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED208u;
    {
        const bool branch_taken_0x2ed208 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED208u;
        // 0x2ed20c: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed208) {
            ctx->pc = 0x2ED240u;
            goto label_2ed240;
        }
    }
    ctx->pc = 0x2ED210u;
label_2ed210:
    // 0x2ed210: 0x8d8f004c  lw          $t7, 0x4C($t4)
    ctx->pc = 0x2ed210u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x2ed214: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x2ed214u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x2ed218: 0x2dee000b  sltiu       $t6, $t7, 0xB
    ctx->pc = 0x2ed218u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2ed21c: 0x1cf7804  sllv        $t7, $t7, $t6
    ctx->pc = 0x2ed21cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
    // 0x2ed220: 0x1af782b  sltu        $t7, $t5, $t7
    ctx->pc = 0x2ed220u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x2ed224: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED224u;
    {
        const bool branch_taken_0x2ed224 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED224u;
        // 0x2ed228: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed224) {
            ctx->pc = 0x2ED238u;
            goto label_2ed238;
        }
    }
    ctx->pc = 0x2ED22Cu;
    // 0x2ed22c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2ed22cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed230: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x2ED230u;
    {
        const bool branch_taken_0x2ed230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED230u;
        // 0x2ed234: 0xad8f0044  sw          $t7, 0x44($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 68), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed230) {
            ctx->pc = 0x2ED188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed188;
        }
    }
    ctx->pc = 0x2ED238u;
label_2ed238:
    // 0x2ed238: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x2ED238u;
    {
        const bool branch_taken_0x2ed238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED238u;
        // 0x2ed23c: 0xad8f0048  sw          $t7, 0x48($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 72), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed238) {
            ctx->pc = 0x2ED188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed188;
        }
    }
    ctx->pc = 0x2ED240u;
label_2ed240:
    // 0x2ed240: 0x25edeca8  addiu       $t5, $t7, -0x1358
    ctx->pc = 0x2ed240u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ed244: 0x8dae0048  lw          $t6, 0x48($t5)
    ctx->pc = 0x2ed244u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x2ed248: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x2ed248u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x2ed24c: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x2ed24cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x2ed250: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED250u;
    {
        const bool branch_taken_0x2ed250 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED250u;
        // 0x2ed254: 0x25cf0001  addiu       $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed250) {
            ctx->pc = 0x2ED264u;
            goto label_2ed264;
        }
    }
    ctx->pc = 0x2ED258u;
    // 0x2ed258: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2ed258u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed25c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x2ED25Cu;
    {
        const bool branch_taken_0x2ed25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED25Cu;
        // 0x2ed260: 0xadaf0044  sw          $t7, 0x44($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed25c) {
            ctx->pc = 0x2ED188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed188;
        }
    }
    ctx->pc = 0x2ED264u;
label_2ed264:
    // 0x2ed264: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x2ED264u;
    {
        const bool branch_taken_0x2ed264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED264u;
        // 0x2ed268: 0xadaf0048  sw          $t7, 0x48($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed264) {
            ctx->pc = 0x2ED188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed188;
        }
    }
    ctx->pc = 0x2ED26Cu;
label_2ed26c:
    // 0x2ed26c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed270: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed270u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed274: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed278: 0x250809f0  addiu       $t0, $t0, 0x9F0
    ctx->pc = 0x2ed278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2544));
    // 0x2ed27c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ed27cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed280: 0x1000ff85  b           . + 4 + (-0x7B << 2)
    ctx->pc = 0x2ED280u;
    {
        const bool branch_taken_0x2ed280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED280u;
        // 0x2ed284: 0x24050458  addiu       $a1, $zero, 0x458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed280) {
            ctx->pc = 0x2ED098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed098;
        }
    }
    ctx->pc = 0x2ED288u;
label_2ed288:
    // 0x2ed288: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed28c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed28cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2ed290:
    // 0x2ed290: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed294: 0x25080a10  addiu       $t0, $t0, 0xA10
    ctx->pc = 0x2ed294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2576));
    // 0x2ed298: 0x1000ff12  b           . + 4 + (-0xEE << 2)
    ctx->pc = 0x2ED298u;
    {
        const bool branch_taken_0x2ed298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED298u;
        // 0x2ed29c: 0x24050449  addiu       $a1, $zero, 0x449 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed298) {
            ctx->pc = 0x2ECEE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecee4;
        }
    }
    ctx->pc = 0x2ED2A0u;
label_2ed2a0:
    // 0x2ed2a0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed2a4: 0x24840998  addiu       $a0, $a0, 0x998
    ctx->pc = 0x2ed2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2456));
    // 0x2ed2a8: 0x250809a8  addiu       $t0, $t0, 0x9A8
    ctx->pc = 0x2ed2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2472));
    // 0x2ed2ac: 0x1000ff0d  b           . + 4 + (-0xF3 << 2)
    ctx->pc = 0x2ED2ACu;
    {
        const bool branch_taken_0x2ed2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2ACu;
        // 0x2ed2b0: 0x24050444  addiu       $a1, $zero, 0x444 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2ac) {
            ctx->pc = 0x2ECEE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecee4;
        }
    }
    ctx->pc = 0x2ED2B4u;
label_2ed2b4:
    // 0x2ed2b4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ed2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ed2b8: 0x26100998  addiu       $s0, $s0, 0x998
    ctx->pc = 0x2ed2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2456));
    // 0x2ed2bc: 0x24e70a60  addiu       $a3, $a3, 0xA60
    ctx->pc = 0x2ed2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2656));
    // 0x2ed2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed2c4: 0x24050403  addiu       $a1, $zero, 0x403
    ctx->pc = 0x2ed2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x2ed2c8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ED2C8u;
    SET_GPR_U32(ctx, 31, 0x2ED2D0u);
    ctx->pc = 0x2ED2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED2C8u;
    // 0x2ed2cc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2ED2C8u, 0x2ED2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED2D0u;
label_2ed2d0:
    // 0x2ed2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed2d4: 0x24050404  addiu       $a1, $zero, 0x404
    ctx->pc = 0x2ed2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x2ed2d8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2ed2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ed2dc: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2ED2DCu;
    SET_GPR_U32(ctx, 31, 0x2ED2E4u);
    ctx->pc = 0x2ED2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED2DCu;
    // 0x2ed2e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1BD8u, 0x2ED2DCu, 0x2ED2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED2E4u;
label_2ed2e4:
    // 0x2ed2e4: 0x1000ff05  b           . + 4 + (-0xFB << 2)
    ctx->pc = 0x2ED2E4u;
    {
        const bool branch_taken_0x2ed2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2E4u;
        // 0x2ed2e8: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2e4) {
            ctx->pc = 0x2ECEFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecefc;
        }
    }
    ctx->pc = 0x2ED2ECu;
    // 0x2ed2ec: 0x0  nop
    ctx->pc = 0x2ed2ecu;
    // NOP
}
