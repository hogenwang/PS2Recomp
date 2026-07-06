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

// Function: sub_002E7438
// Address: 0x2e7438 - 0x2e7c48
void sub_002E7438_0x2e7438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7438_0x2e7438");
#endif

    switch (ctx->pc) {
        case 0x2e745cu: goto label_2e745c;
        case 0x2e7470u: goto label_2e7470;
        case 0x2e74a8u: goto label_2e74a8;
        case 0x2e7518u: goto label_2e7518;
        case 0x2e7538u: goto label_2e7538;
        case 0x2e7540u: goto label_2e7540;
        case 0x2e7550u: goto label_2e7550;
        case 0x2e7568u: goto label_2e7568;
        case 0x2e757cu: goto label_2e757c;
        case 0x2e7594u: goto label_2e7594;
        case 0x2e75b8u: goto label_2e75b8;
        case 0x2e75c0u: goto label_2e75c0;
        case 0x2e75f8u: goto label_2e75f8;
        case 0x2e7610u: goto label_2e7610;
        case 0x2e7624u: goto label_2e7624;
        case 0x2e7640u: goto label_2e7640;
        case 0x2e7688u: goto label_2e7688;
        case 0x2e7698u: goto label_2e7698;
        case 0x2e76a4u: goto label_2e76a4;
        case 0x2e76f8u: goto label_2e76f8;
        case 0x2e7708u: goto label_2e7708;
        case 0x2e773cu: goto label_2e773c;
        case 0x2e774cu: goto label_2e774c;
        case 0x2e7764u: goto label_2e7764;
        case 0x2e7778u: goto label_2e7778;
        case 0x2e7784u: goto label_2e7784;
        case 0x2e7794u: goto label_2e7794;
        case 0x2e77a8u: goto label_2e77a8;
        case 0x2e77d8u: goto label_2e77d8;
        case 0x2e77f0u: goto label_2e77f0;
        case 0x2e77fcu: goto label_2e77fc;
        case 0x2e784cu: goto label_2e784c;
        case 0x2e785cu: goto label_2e785c;
        case 0x2e7878u: goto label_2e7878;
        case 0x2e78a0u: goto label_2e78a0;
        case 0x2e78b0u: goto label_2e78b0;
        case 0x2e78e8u: goto label_2e78e8;
        case 0x2e78fcu: goto label_2e78fc;
        case 0x2e7914u: goto label_2e7914;
        case 0x2e7934u: goto label_2e7934;
        case 0x2e7950u: goto label_2e7950;
        case 0x2e795cu: goto label_2e795c;
        case 0x2e79b0u: goto label_2e79b0;
        case 0x2e79c8u: goto label_2e79c8;
        case 0x2e79f0u: goto label_2e79f0;
        case 0x2e7a14u: goto label_2e7a14;
        case 0x2e7a2cu: goto label_2e7a2c;
        case 0x2e7a38u: goto label_2e7a38;
        case 0x2e7a54u: goto label_2e7a54;
        case 0x2e7a68u: goto label_2e7a68;
        case 0x2e7a70u: goto label_2e7a70;
        case 0x2e7aacu: goto label_2e7aac;
        case 0x2e7ac0u: goto label_2e7ac0;
        case 0x2e7ad4u: goto label_2e7ad4;
        case 0x2e7ae0u: goto label_2e7ae0;
        case 0x2e7afcu: goto label_2e7afc;
        case 0x2e7b14u: goto label_2e7b14;
        case 0x2e7b2cu: goto label_2e7b2c;
        case 0x2e7b40u: goto label_2e7b40;
        case 0x2e7b68u: goto label_2e7b68;
        case 0x2e7b70u: goto label_2e7b70;
        case 0x2e7b84u: goto label_2e7b84;
        case 0x2e7bc0u: goto label_2e7bc0;
        case 0x2e7bc8u: goto label_2e7bc8;
        case 0x2e7becu: goto label_2e7bec;
        case 0x2e7c10u: goto label_2e7c10;
        default: break;
    }

    ctx->pc = 0x2e7438u;

label_2e7438:
    // 0x2e7438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e743c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e743cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e7440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e7440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e7444: 0x24a5f9c0  addiu       $a1, $a1, -0x640
    ctx->pc = 0x2e7444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965696));
    // 0x2e7448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e744c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7450: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2e7450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e7454: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E7454u;
    SET_GPR_U32(ctx, 31, 0x2E745Cu);
    ctx->pc = 0x2E7458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7454u;
    // 0x2e7458: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E7454u, 0x2E745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E745Cu;
label_2e745c:
    // 0x2e745c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E745Cu;
    {
        const bool branch_taken_0x2e745c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E745Cu;
        // 0x2e7460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e745c) {
            ctx->pc = 0x2E74B8u;
            goto label_2e74b8;
        }
    }
    ctx->pc = 0x2E7464u;
    // 0x2e7464: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e7464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e7468: 0x8c43ea08  lw          $v1, -0x15F8($v0)
    ctx->pc = 0x2e7468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e746c: 0x0  nop
    ctx->pc = 0x2e746cu;
    // NOP
label_2e7470:
    // 0x2e7470: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E7470u;
    {
        const bool branch_taken_0x2e7470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7470u;
        // 0x2e7474: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7470) {
            ctx->pc = 0x2E749Cu;
            goto label_2e749c;
        }
    }
    ctx->pc = 0x2E7478u;
    // 0x2e7478: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2e7478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2e747c: 0x5040fffc  beql        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E747Cu;
    {
        const bool branch_taken_0x2e747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e747c) {
            ctx->pc = 0x2E7480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E747Cu;
            // 0x2e7480: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7470;
        }
    }
    ctx->pc = 0x2E7484u;
    // 0x2e7484: 0x90426a10  lbu         $v0, 0x6A10($v0)
    ctx->pc = 0x2e7484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27152)));
    // 0x2e7488: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E7488u;
    {
        const bool branch_taken_0x2e7488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7488) {
            ctx->pc = 0x2E748Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7488u;
            // 0x2e748c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7470;
        }
    }
    ctx->pc = 0x2E7490u;
    // 0x2e7490: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7490u;
    {
        const bool branch_taken_0x2e7490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7490) {
            ctx->pc = 0x2E7494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7490u;
            // 0x2e7494: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E74B0u;
            goto label_2e74b0;
        }
    }
    ctx->pc = 0x2E7498u;
    // 0x2e7498: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e749c:
    // 0x2e749c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e74a0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E74A0u;
    SET_GPR_U32(ctx, 31, 0x2E74A8u);
    ctx->pc = 0x2E74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E74A0u;
    // 0x2e74a4: 0x24a5f9c8  addiu       $a1, $a1, -0x638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E74A0u, 0x2E74A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E74A8u;
label_2e74a8:
    // 0x2e74a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E74A8u;
    {
        const bool branch_taken_0x2e74a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74A8u;
        // 0x2e74ac: 0x2402ffe4  addiu       $v0, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74a8) {
            ctx->pc = 0x2E74B8u;
            goto label_2e74b8;
        }
    }
    ctx->pc = 0x2E74B0u;
label_2e74b0:
    // 0x2e74b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e74b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74b4: 0xac70002c  sw          $s0, 0x2C($v1)
    ctx->pc = 0x2e74b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
label_2e74b8:
    // 0x2e74b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e74b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e74bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e74bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e74c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E74C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E74C0u;
        // 0x2e74c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E74C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E74C8u;
    // 0x2e74c8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e74c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e74cc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2e74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2e74d0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2e74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e74d4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2e74d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2e74d8: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x2e74d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2e74dc: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2e74dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2e74e0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2e74e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2e74e4: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2e74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2e74e8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2e74e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2e74ec: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2e74ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2e74f0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2e74f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2e74f4: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2e74f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2e74f8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2e74f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2e74fc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2e74fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2e7500: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2e7500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2e7504: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2e7504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2e7508: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2e7508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2e750c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2e750cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2e7510: 0x8fb20034  lw          $s2, 0x34($sp)
    ctx->pc = 0x2e7510u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2e7514: 0x0  nop
    ctx->pc = 0x2e7514u;
    // NOP
label_2e7518:
    // 0x2e7518: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e7518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e751c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2e751cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2e7520: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2e7520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2e7524: 0x0  nop
    ctx->pc = 0x2e7524u;
    // NOP
    // 0x2e7528: 0x0  nop
    ctx->pc = 0x2e7528u;
    // NOP
    // 0x2e752c: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E752Cu;
    {
        const bool branch_taken_0x2e752c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2e752c) {
            ctx->pc = 0x2E7518u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7518;
        }
    }
    ctx->pc = 0x2E7534u;
    // 0x2e7534: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2e7534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2e7538:
    // 0x2e7538: 0xc0981cc  jal         func_260730
    ctx->pc = 0x2E7538u;
    SET_GPR_U32(ctx, 31, 0x2E7540u);
    ctx->pc = 0x2E753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7538u;
    // 0x2e753c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260730u, 0x2E7538u, 0x2E7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7540u;
label_2e7540:
    // 0x2e7540: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7540u;
    {
        const bool branch_taken_0x2e7540 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7540u;
        // 0x2e7544: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7540) {
            ctx->pc = 0x2E7584u;
            goto label_2e7584;
        }
    }
    ctx->pc = 0x2E7548u;
    // 0x2e7548: 0xc098552  jal         func_261548
    ctx->pc = 0x2E7548u;
    SET_GPR_U32(ctx, 31, 0x2E7550u);
    ctx->pc = 0x2E754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7548u;
    // 0x2e754c: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2E7548u, 0x2E7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7550u;
label_2e7550:
    // 0x2e7550: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7550u;
    {
        const bool branch_taken_0x2e7550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7550u;
        // 0x2e7554: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7550) {
            ctx->pc = 0x2E7570u;
            goto label_2e7570;
        }
    }
    ctx->pc = 0x2E7558u;
    // 0x2e7558: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e755c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7560: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E7560u;
    SET_GPR_U32(ctx, 31, 0x2E7568u);
    ctx->pc = 0x2E7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7560u;
    // 0x2e7564: 0x24a5fa40  addiu       $a1, $a1, -0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7560u, 0x2E7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7568u;
label_2e7568:
    // 0x2e7568: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x2E7568u;
    {
        const bool branch_taken_0x2e7568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7568u;
        // 0x2e756c: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7568) {
            ctx->pc = 0x2E7A9Cu;
            goto label_2e7a9c;
        }
    }
    ctx->pc = 0x2E7570u;
label_2e7570:
    // 0x2e7570: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e7570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e7574: 0xc0981cc  jal         func_260730
    ctx->pc = 0x2E7574u;
    SET_GPR_U32(ctx, 31, 0x2E757Cu);
    ctx->pc = 0x2E7578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7574u;
    // 0x2e7578: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260730u, 0x2E7574u, 0x2E757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E757Cu;
label_2e757c:
    // 0x2e757c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E757Cu;
    {
        const bool branch_taken_0x2e757c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E757Cu;
        // 0x2e7580: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e757c) {
            ctx->pc = 0x2E759Cu;
            goto label_2e759c;
        }
    }
    ctx->pc = 0x2E7584u;
label_2e7584:
    // 0x2e7584: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e7588: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e7588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e758c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E758Cu;
    SET_GPR_U32(ctx, 31, 0x2E7594u);
    ctx->pc = 0x2E7590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E758Cu;
    // 0x2e7590: 0x24a5fa00  addiu       $a1, $a1, -0x600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E758Cu, 0x2E7594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7594u;
label_2e7594:
    // 0x2e7594: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x2E7594u;
    {
        const bool branch_taken_0x2e7594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7594u;
        // 0x2e7598: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7594) {
            ctx->pc = 0x2E7A9Cu;
            goto label_2e7a9c;
        }
    }
    ctx->pc = 0x2E759Cu;
label_2e759c:
    // 0x2e759c: 0x8c51ea08  lw          $s1, -0x15F8($v0)
    ctx->pc = 0x2e759cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e75a0: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E75A0u;
    {
        const bool branch_taken_0x2e75a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75A0u;
        // 0x2e75a4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75a0) {
            ctx->pc = 0x2E75ECu;
            goto label_2e75ec;
        }
    }
    ctx->pc = 0x2E75A8u;
    // 0x2e75a8: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x2e75a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x2e75ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2e75acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2e75b0: 0x26230034  addiu       $v1, $s1, 0x34
    ctx->pc = 0x2e75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x2e75b4: 0x0  nop
    ctx->pc = 0x2e75b4u;
    // NOP
label_2e75b8:
    // 0x2e75b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e75b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e75bc: 0x0  nop
    ctx->pc = 0x2e75bcu;
    // NOP
label_2e75c0:
    // 0x2e75c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e75c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2e75c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2e75c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e75c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2e75cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e75d0: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2e75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2e75d4: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E75D4u;
    {
        const bool branch_taken_0x2e75d4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2e75d4) {
            ctx->pc = 0x2E75C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e75c0;
        }
    }
    ctx->pc = 0x2E75DCu;
    // 0x2e75dc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2e75dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e75e0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E75E0u;
    {
        const bool branch_taken_0x2e75e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75E0u;
        // 0x2e75e4: 0x26230034  addiu       $v1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75e0) {
            ctx->pc = 0x2E75B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e75b8;
        }
    }
    ctx->pc = 0x2E75E8u;
    // 0x2e75e8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2e75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2e75ec:
    // 0x2e75ec: 0x184000ea  blez        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x2E75ECu;
    {
        const bool branch_taken_0x2e75ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E75F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75ECu;
        // 0x2e75f0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e75ec) {
            ctx->pc = 0x2E7998u;
            goto label_2e7998;
        }
    }
    ctx->pc = 0x2E75F4u;
    // 0x2e75f4: 0x0  nop
    ctx->pc = 0x2e75f4u;
    // NOP
label_2e75f8:
    // 0x2e75f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e75fc: 0x8c71ea08  lw          $s1, -0x15F8($v1)
    ctx->pc = 0x2e75fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961672)));
    // 0x2e7600: 0x12200089  beqz        $s1, . + 4 + (0x89 << 2)
    ctx->pc = 0x2E7600u;
    {
        const bool branch_taken_0x2e7600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7600u;
        // 0x2e7604: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7600) {
            ctx->pc = 0x2E7828u;
            goto label_2e7828;
        }
    }
    ctx->pc = 0x2E7608u;
    // 0x2e7608: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x2e7608u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e760c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2e7610:
    // 0x2e7610: 0x26360004  addiu       $s6, $s1, 0x4
    ctx->pc = 0x2e7610u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e7614: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e7614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7618: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2e7618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e761c: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E761Cu;
    SET_GPR_U32(ctx, 31, 0x2E7624u);
    ctx->pc = 0x2E7620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E761Cu;
    // 0x2e7620: 0x702821  addu        $a1, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E761Cu, 0x2E7624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7624u;
label_2e7624:
    // 0x2e7624: 0x5440007c  bnel        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x2E7624u;
    {
        const bool branch_taken_0x2e7624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7624) {
            ctx->pc = 0x2E7628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7624u;
            // 0x2e7628: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7818u;
            goto label_2e7818;
        }
    }
    ctx->pc = 0x2E762Cu;
    // 0x2e762c: 0x8fb30040  lw          $s3, 0x40($sp)
    ctx->pc = 0x2e762cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7630: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e7630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7634: 0x26370030  addiu       $s7, $s1, 0x30
    ctx->pc = 0x2e7634u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2e7638: 0x26340034  addiu       $s4, $s1, 0x34
    ctx->pc = 0x2e7638u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x2e763c: 0x0  nop
    ctx->pc = 0x2e763cu;
    // NOP
label_2e7640:
    // 0x2e7640: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2e7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e7644: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e7644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e7648: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x2e7648u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e764c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e7650: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E7650u;
    {
        const bool branch_taken_0x2e7650 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7650u;
        // 0x2e7654: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7650) {
            ctx->pc = 0x2E76A4u;
            goto label_2e76a4;
        }
    }
    ctx->pc = 0x2E7658u;
    // 0x2e7658: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2e7658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2e765c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2e765cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2e7660: 0x2a31026  xor         $v0, $s5, $v1
    ctx->pc = 0x2e7660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 3));
    // 0x2e7664: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e7664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2e7668: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E7668u;
    {
        const bool branch_taken_0x2e7668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7668u;
        // 0x2e766c: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7668) {
            ctx->pc = 0x2E76A4u;
            goto label_2e76a4;
        }
    }
    ctx->pc = 0x2E7670u;
    // 0x2e7670: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E7670u;
    {
        const bool branch_taken_0x2e7670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7670u;
        // 0x2e7674: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7670) {
            ctx->pc = 0x2E76A4u;
            goto label_2e76a4;
        }
    }
    ctx->pc = 0x2E7678u;
    // 0x2e7678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e767c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e767cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7680: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E7680u;
    SET_GPR_U32(ctx, 31, 0x2E7688u);
    ctx->pc = 0x2E7684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7680u;
    // 0x2e7684: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E7680u, 0x2E7688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7688u;
label_2e7688:
    // 0x2e7688: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e7688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e768c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e768cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7690: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E7690u;
    SET_GPR_U32(ctx, 31, 0x2E7698u);
    ctx->pc = 0x2E7694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7690u;
    // 0x2e7694: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E7690u, 0x2E7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7698u;
label_2e7698:
    // 0x2e7698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e769c: 0xc0b9aee  jal         func_2E6BB8
    ctx->pc = 0x2E769Cu;
    SET_GPR_U32(ctx, 31, 0x2E76A4u);
    ctx->pc = 0x2E76A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E769Cu;
    // 0x2e76a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6BB8u, 0x2E769Cu, 0x2E76A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76A4u;
label_2e76a4:
    // 0x2e76a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2e76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2e76a8: 0x2a31024  and         $v0, $s5, $v1
    ctx->pc = 0x2e76a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x2e76ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E76ACu;
    {
        const bool branch_taken_0x2e76ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e76ac) {
            ctx->pc = 0x2E76B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E76ACu;
            // 0x2e76b0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E76C8u;
            goto label_2e76c8;
        }
    }
    ctx->pc = 0x2E76B4u;
    // 0x2e76b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2e76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e76b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e76b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e76bc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E76BCu;
    {
        const bool branch_taken_0x2e76bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e76bc) {
            ctx->pc = 0x2E76C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E76BCu;
            // 0x2e76c0: 0x8e670000  lw          $a3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E76E8u;
            goto label_2e76e8;
        }
    }
    ctx->pc = 0x2E76C4u;
    // 0x2e76c4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2e76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_2e76c8:
    // 0x2e76c8: 0x2a31024  and         $v0, $s5, $v1
    ctx->pc = 0x2e76c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x2e76cc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E76CCu;
    {
        const bool branch_taken_0x2e76cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e76cc) {
            ctx->pc = 0x2E76D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E76CCu;
            // 0x2e76d0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E770Cu;
            goto label_2e770c;
        }
    }
    ctx->pc = 0x2E76D4u;
    // 0x2e76d4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2e76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e76d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e76d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e76dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E76DCu;
    {
        const bool branch_taken_0x2e76dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e76dc) {
            ctx->pc = 0x2E76E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E76DCu;
            // 0x2e76e0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E770Cu;
            goto label_2e770c;
        }
    }
    ctx->pc = 0x2E76E4u;
    // 0x2e76e4: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2e76e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e76e8:
    // 0x2e76e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e76e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e76ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76f0: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E76F0u;
    SET_GPR_U32(ctx, 31, 0x2E76F8u);
    ctx->pc = 0x2E76F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76F0u;
    // 0x2e76f4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E76F0u, 0x2E76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76F8u;
label_2e76f8:
    // 0x2e76f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e76f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e76fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7700: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E7700u;
    SET_GPR_U32(ctx, 31, 0x2E7708u);
    ctx->pc = 0x2E7704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7700u;
    // 0x2e7704: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E7700u, 0x2E7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7708u;
label_2e7708:
    // 0x2e7708: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2e7708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e770c:
    // 0x2e770c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2e770cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2e7710: 0x2a31026  xor         $v0, $s5, $v1
    ctx->pc = 0x2e7710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 3));
    // 0x2e7714: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e7714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2e7718: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E7718u;
    {
        const bool branch_taken_0x2e7718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7718u;
        // 0x2e771c: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7718) {
            ctx->pc = 0x2E77A8u;
            goto label_2e77a8;
        }
    }
    ctx->pc = 0x2E7720u;
    // 0x2e7720: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E7720u;
    {
        const bool branch_taken_0x2e7720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7720u;
        // 0x2e7724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7720) {
            ctx->pc = 0x2E77A8u;
            goto label_2e77a8;
        }
    }
    ctx->pc = 0x2E7728u;
    // 0x2e7728: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2e7728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e772c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e772cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7730: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e7730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e7734: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E7734u;
    SET_GPR_U32(ctx, 31, 0x2E773Cu);
    ctx->pc = 0x2E7738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7734u;
    // 0x2e7738: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E7734u, 0x2E773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E773Cu;
label_2e773c:
    // 0x2e773c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e773cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e7740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7744: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E7744u;
    SET_GPR_U32(ctx, 31, 0x2E774Cu);
    ctx->pc = 0x2E7748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7744u;
    // 0x2e7748: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E7744u, 0x2E774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E774Cu;
label_2e774c:
    // 0x2e774c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e7750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7754: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x2e7754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2e7758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e7758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e775c: 0xc0b99fc  jal         func_2E67F0
    ctx->pc = 0x2E775Cu;
    SET_GPR_U32(ctx, 31, 0x2E7764u);
    ctx->pc = 0x2E7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E775Cu;
    // 0x2e7760: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E67F0u, 0x2E775Cu, 0x2E7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7764u;
label_2e7764:
    // 0x2e7764: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e7764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7768: 0x14700008  bne         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7768u;
    {
        const bool branch_taken_0x2e7768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7768u;
        // 0x2e776c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7768) {
            ctx->pc = 0x2E778Cu;
            goto label_2e778c;
        }
    }
    ctx->pc = 0x2E7770u;
    // 0x2e7770: 0xc0b9aee  jal         func_2E6BB8
    ctx->pc = 0x2E7770u;
    SET_GPR_U32(ctx, 31, 0x2E7778u);
    ctx->pc = 0x2E7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7770u;
    // 0x2e7774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6BB8u, 0x2E7770u, 0x2E7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7778u;
label_2e7778:
    // 0x2e7778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e777c: 0xc0b9ab0  jal         func_2E6AC0
    ctx->pc = 0x2E777Cu;
    SET_GPR_U32(ctx, 31, 0x2E7784u);
    ctx->pc = 0x2E7780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E777Cu;
    // 0x2e7780: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6AC0u, 0x2E777Cu, 0x2E7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7784u;
label_2e7784:
    // 0x2e7784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7784u;
    {
        const bool branch_taken_0x2e7784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7784u;
        // 0x2e7788: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7784) {
            ctx->pc = 0x2E77A8u;
            goto label_2e77a8;
        }
    }
    ctx->pc = 0x2E778Cu;
label_2e778c:
    // 0x2e778c: 0xc0b9ab0  jal         func_2E6AC0
    ctx->pc = 0x2E778Cu;
    SET_GPR_U32(ctx, 31, 0x2E7794u);
    ctx->pc = 0x2E7790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E778Cu;
    // 0x2e7790: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6AC0u, 0x2E778Cu, 0x2E7794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7794u;
label_2e7794:
    // 0x2e7794: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2e7794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e779c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77a0: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E77A0u;
    SET_GPR_U32(ctx, 31, 0x2E77A8u);
    ctx->pc = 0x2E77A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77A0u;
    // 0x2e77a4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E77A0u, 0x2E77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77A8u;
label_2e77a8:
    // 0x2e77a8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2e77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e77ac: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2e77acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x2e77b0: 0x2a31026  xor         $v0, $s5, $v1
    ctx->pc = 0x2e77b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 3));
    // 0x2e77b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e77b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2e77b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E77B8u;
    {
        const bool branch_taken_0x2e77b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77B8u;
        // 0x2e77bc: 0x641024  and         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77b8) {
            ctx->pc = 0x2E77FCu;
            goto label_2e77fc;
        }
    }
    ctx->pc = 0x2E77C0u;
    // 0x2e77c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E77C0u;
    {
        const bool branch_taken_0x2e77c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77C0u;
        // 0x2e77c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77c0) {
            ctx->pc = 0x2E77E0u;
            goto label_2e77e0;
        }
    }
    ctx->pc = 0x2E77C8u;
    // 0x2e77c8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2e77c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e77cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e77ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77d0: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E77D0u;
    SET_GPR_U32(ctx, 31, 0x2E77D8u);
    ctx->pc = 0x2E77D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77D0u;
    // 0x2e77d4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E77D0u, 0x2E77D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77D8u;
label_2e77d8:
    // 0x2e77d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E77D8u;
    {
        const bool branch_taken_0x2e77d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77D8u;
        // 0x2e77dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77d8) {
            ctx->pc = 0x2E7800u;
            goto label_2e7800;
        }
    }
    ctx->pc = 0x2E77E0u;
label_2e77e0:
    // 0x2e77e0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2e77e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e77e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e77e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77e8: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E77E8u;
    SET_GPR_U32(ctx, 31, 0x2E77F0u);
    ctx->pc = 0x2E77ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77E8u;
    // 0x2e77ec: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E77E8u, 0x2E77F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77F0u;
label_2e77f0:
    // 0x2e77f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e77f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77f4: 0xc0b9aee  jal         func_2E6BB8
    ctx->pc = 0x2E77F4u;
    SET_GPR_U32(ctx, 31, 0x2E77FCu);
    ctx->pc = 0x2E77F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77F4u;
    // 0x2e77f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6BB8u, 0x2E77F4u, 0x2E77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77FCu;
label_2e77fc:
    // 0x2e77fc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e77fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2e7800:
    // 0x2e7800: 0x26f70028  addiu       $s7, $s7, 0x28
    ctx->pc = 0x2e7800u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
    // 0x2e7804: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e7804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e7808: 0x1a40ff8d  blez        $s2, . + 4 + (-0x73 << 2)
    ctx->pc = 0x2E7808u;
    {
        const bool branch_taken_0x2e7808 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2E780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7808u;
        // 0x2e780c: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7808) {
            ctx->pc = 0x2E7640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7640;
        }
    }
    ctx->pc = 0x2E7810u;
    // 0x2e7810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7810u;
    {
        const bool branch_taken_0x2e7810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7810) {
            ctx->pc = 0x2E7820u;
            goto label_2e7820;
        }
    }
    ctx->pc = 0x2E7818u;
label_2e7818:
    // 0x2e7818: 0x1620ff7d  bnez        $s1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x2E7818u;
    {
        const bool branch_taken_0x2e7818 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7818u;
        // 0x2e781c: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7818) {
            ctx->pc = 0x2E7610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7610;
        }
    }
    ctx->pc = 0x2E7820u;
label_2e7820:
    // 0x2e7820: 0x16200058  bnez        $s1, . + 4 + (0x58 << 2)
    ctx->pc = 0x2E7820u;
    {
        const bool branch_taken_0x2e7820 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7820u;
        // 0x2e7824: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7820) {
            ctx->pc = 0x2E7984u;
            goto label_2e7984;
        }
    }
    ctx->pc = 0x2E7828u;
label_2e7828:
    // 0x2e7828: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e7828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e782c: 0x8c43ea2c  lw          $v1, -0x15D4($v0)
    ctx->pc = 0x2e782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961708)));
    // 0x2e7830: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E7830u;
    {
        const bool branch_taken_0x2e7830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7830u;
        // 0x2e7834: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7830) {
            ctx->pc = 0x2E7978u;
            goto label_2e7978;
        }
    }
    ctx->pc = 0x2E7838u;
    // 0x2e7838: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2e7838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e783c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e7840: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2e7840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e7844: 0xc0b968c  jal         func_2E5A30
    ctx->pc = 0x2E7844u;
    SET_GPR_U32(ctx, 31, 0x2E784Cu);
    ctx->pc = 0x2E7848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7844u;
    // 0x2e7848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5A30u, 0x2E7844u, 0x2E784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E784Cu;
label_2e784c:
    // 0x2e784c: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2E784Cu;
    {
        const bool branch_taken_0x2e784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E784Cu;
        // 0x2e7850: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e784c) {
            ctx->pc = 0x2E7984u;
            goto label_2e7984;
        }
    }
    ctx->pc = 0x2E7854u;
    // 0x2e7854: 0xc0ba28a  jal         func_2E8A28
    ctx->pc = 0x2E7854u;
    SET_GPR_U32(ctx, 31, 0x2E785Cu);
    ctx->pc = 0x2E8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8A28u, 0x2E7854u, 0x2E785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E785Cu;
label_2e785c:
    // 0x2e785c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e785cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7860: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2E7860u;
    {
        const bool branch_taken_0x2e7860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7860u;
        // 0x2e7864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7860) {
            ctx->pc = 0x2E7974u;
            goto label_2e7974;
        }
    }
    ctx->pc = 0x2E7868u;
    // 0x2e7868: 0x263e0004  addiu       $fp, $s1, 0x4
    ctx->pc = 0x2e7868u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e786c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7870: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2E7870u;
    SET_GPR_U32(ctx, 31, 0x2E7878u);
    ctx->pc = 0x2E7874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7870u;
    // 0x2e7874: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2E7870u, 0x2E7878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7878u;
label_2e7878:
    // 0x2e7878: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e7878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e787c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7880: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e7880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7884: 0x26360040  addiu       $s6, $s1, 0x40
    ctx->pc = 0x2e7884u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2e7888: 0x2635003c  addiu       $s5, $s1, 0x3C
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2e788c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7890: 0x26340038  addiu       $s4, $s1, 0x38
    ctx->pc = 0x2e7890u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x2e7894: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2e7894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2e7898: 0xc0b94e0  jal         func_2E5380
    ctx->pc = 0x2E7898u;
    SET_GPR_U32(ctx, 31, 0x2E78A0u);
    ctx->pc = 0x2E789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7898u;
    // 0x2e789c: 0x26330030  addiu       $s3, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5380u, 0x2E7898u, 0x2E78A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78A0u;
label_2e78a0:
    // 0x2e78a0: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x2e78a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x2e78a4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2e78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x2e78a8: 0x8fb70040  lw          $s7, 0x40($sp)
    ctx->pc = 0x2e78a8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e78ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e78acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2e78b0:
    // 0x2e78b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e78b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2e78b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e78b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78bc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2e78c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e78c4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2e78c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2e78c8: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x2e78c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2e78cc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2e78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2e78d0: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x2e78d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2e78d4: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2e78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x2e78d8: 0x26940028  addiu       $s4, $s4, 0x28
    ctx->pc = 0x2e78d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x2e78dc: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x2e78dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x2e78e0: 0xc0b9d0e  jal         func_2E7438
    ctx->pc = 0x2E78E0u;
    SET_GPR_U32(ctx, 31, 0x2E78E8u);
    ctx->pc = 0x2E78E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78E0u;
    // 0x2e78e4: 0x26d60028  addiu       $s6, $s6, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7438u;
    goto label_2e7438;
    ctx->pc = 0x2E78E8u;
label_2e78e8:
    // 0x2e78e8: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x2e78e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e78ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e78ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e78f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78f4: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E78F4u;
    SET_GPR_U32(ctx, 31, 0x2E78FCu);
    ctx->pc = 0x2E78F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78F4u;
    // 0x2e78f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E78F4u, 0x2E78FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78FCu;
label_2e78fc:
    // 0x2e78fc: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x2e78fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x2e7900: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e7900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7904: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e7904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e7908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e790c: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E790Cu;
    SET_GPR_U32(ctx, 31, 0x2E7914u);
    ctx->pc = 0x2E7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E790Cu;
    // 0x2e7910: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E790Cu, 0x2E7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7914u;
label_2e7914:
    // 0x2e7914: 0x1a40ffe6  blez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2E7914u;
    {
        const bool branch_taken_0x2e7914 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2E7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7914u;
        // 0x2e7918: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7914) {
            ctx->pc = 0x2E78B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e78b0;
        }
    }
    ctx->pc = 0x2E791Cu;
    // 0x2e791c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e791cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e7920: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2e7920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2e7924: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x2e7924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
    // 0x2e7928: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e7928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e792c: 0xc043334  jal         func_10CCD0
    ctx->pc = 0x2E792Cu;
    SET_GPR_U32(ctx, 31, 0x2E7934u);
    ctx->pc = 0x2E7930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E792Cu;
    // 0x2e7930: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCD0u, 0x2E792Cu, 0x2E7934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7934u;
label_2e7934:
    // 0x2e7934: 0x4400064  bltz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2E7934u;
    {
        const bool branch_taken_0x2e7934 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7934u;
        // 0x2e7938: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7934) {
            ctx->pc = 0x2E7AC8u;
            goto label_2e7ac8;
        }
    }
    ctx->pc = 0x2E793Cu;
    // 0x2e793c: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E793Cu;
    {
        const bool branch_taken_0x2e793c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E7940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E793Cu;
        // 0x2e7940: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e793c) {
            ctx->pc = 0x2E7980u;
            goto label_2e7980;
        }
    }
    ctx->pc = 0x2E7944u;
    // 0x2e7944: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2e7944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2e7948: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2e7948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e794c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e794cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2e7950:
    // 0x2e7950: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e7950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e7954: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2E7954u;
    SET_GPR_U32(ctx, 31, 0x2E795Cu);
    ctx->pc = 0x2E7958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7954u;
    // 0x2e7958: 0x8c64ea18  lw          $a0, -0x15E8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2E7954u, 0x2E795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E795Cu;
label_2e795c:
    // 0x2e795c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2e795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e7960: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2e7960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e7964: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E7964u;
    {
        const bool branch_taken_0x2e7964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7964u;
        // 0x2e7968: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7964) {
            ctx->pc = 0x2E7950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7950;
        }
    }
    ctx->pc = 0x2E796Cu;
    // 0x2e796c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E796Cu;
    {
        const bool branch_taken_0x2e796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E796Cu;
        // 0x2e7970: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e796c) {
            ctx->pc = 0x2E798Cu;
            goto label_2e798c;
        }
    }
    ctx->pc = 0x2E7974u;
label_2e7974:
    // 0x2e7974: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2e7974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2e7978:
    // 0x2e7978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7978u;
    {
        const bool branch_taken_0x2e7978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7978u;
        // 0x2e797c: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7978) {
            ctx->pc = 0x2E7988u;
            goto label_2e7988;
        }
    }
    ctx->pc = 0x2E7980u;
label_2e7980:
    // 0x2e7980: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2e7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2e7984:
    // 0x2e7984: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2e7984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e7988:
    // 0x2e7988: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2e7988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2e798c:
    // 0x2e798c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2e798cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e7990: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x2E7990u;
    {
        const bool branch_taken_0x2e7990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7990u;
        // 0x2e7994: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7990) {
            ctx->pc = 0x2E75F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e75f8;
        }
    }
    ctx->pc = 0x2E7998u;
label_2e7998:
    // 0x2e7998: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e7998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e799c: 0x8c71ea08  lw          $s1, -0x15F8($v1)
    ctx->pc = 0x2e799cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961672)));
    // 0x2e79a0: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E79A0u;
    {
        const bool branch_taken_0x2e79a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79A0u;
        // 0x2e79a4: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79a0) {
            ctx->pc = 0x2E7A9Cu;
            goto label_2e7a9c;
        }
    }
    ctx->pc = 0x2E79A8u;
    // 0x2e79a8: 0x8e360000  lw          $s6, 0x0($s1)
    ctx->pc = 0x2e79a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e79ac: 0x0  nop
    ctx->pc = 0x2e79acu;
    // NOP
label_2e79b0:
    // 0x2e79b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e79b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79b4: 0x8fb40040  lw          $s4, 0x40($sp)
    ctx->pc = 0x2e79b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e79b8: 0x241e0006  addiu       $fp, $zero, 0x6
    ctx->pc = 0x2e79b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e79bc: 0x26350038  addiu       $s5, $s1, 0x38
    ctx->pc = 0x2e79bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x2e79c0: 0x26330034  addiu       $s3, $s1, 0x34
    ctx->pc = 0x2e79c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x2e79c4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2e79c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e79c8:
    // 0x2e79c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e79cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e79ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e79d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e79d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e79d4: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E79D4u;
    {
        const bool branch_taken_0x2e79d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e79d4) {
            ctx->pc = 0x2E79D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E79D4u;
            // 0x2e79d8: 0x26b50028  addiu       $s5, $s5, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A7Cu;
            goto label_2e7a7c;
        }
    }
    ctx->pc = 0x2E79DCu;
    // 0x2e79dc: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2e79dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e79e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e79e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e79e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79e8: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E79E8u;
    SET_GPR_U32(ctx, 31, 0x2E79F0u);
    ctx->pc = 0x2E79ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E79E8u;
    // 0x2e79ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E79E8u, 0x2E79F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79F0u;
label_2e79f0:
    // 0x2e79f0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2e79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e79f4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E79F4u;
    {
        const bool branch_taken_0x2e79f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e79f4) {
            ctx->pc = 0x2E79F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E79F4u;
            // 0x2e79f8: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A1Cu;
            goto label_2e7a1c;
        }
    }
    ctx->pc = 0x2E79FCu;
    // 0x2e79fc: 0x545e001f  bnel        $v0, $fp, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E79FCu;
    {
        const bool branch_taken_0x2e79fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x2e79fc) {
            ctx->pc = 0x2E7A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E79FCu;
            // 0x2e7a00: 0x26b50028  addiu       $s5, $s5, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A7Cu;
            goto label_2e7a7c;
        }
    }
    ctx->pc = 0x2E7A04u;
    // 0x2e7a04: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e7a08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e7a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a0c: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E7A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A14u);
    ctx->pc = 0x2E7A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A0Cu;
    // 0x2e7a10: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E7A0Cu, 0x2E7A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A14u;
label_2e7a14:
    // 0x2e7a14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E7A14u;
    {
        const bool branch_taken_0x2e7a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A14u;
        // 0x2e7a18: 0x26b50028  addiu       $s5, $s5, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a14) {
            ctx->pc = 0x2E7A7Cu;
            goto label_2e7a7c;
        }
    }
    ctx->pc = 0x2E7A1Cu;
label_2e7a1c:
    // 0x2e7a1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e7a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a24: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E7A24u;
    SET_GPR_U32(ctx, 31, 0x2E7A2Cu);
    ctx->pc = 0x2E7A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A24u;
    // 0x2e7a28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E7A24u, 0x2E7A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A2Cu;
label_2e7a2c:
    // 0x2e7a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a30: 0xc0b9ae2  jal         func_2E6B88
    ctx->pc = 0x2E7A30u;
    SET_GPR_U32(ctx, 31, 0x2E7A38u);
    ctx->pc = 0x2E7A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A30u;
    // 0x2e7a34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6B88u, 0x2E7A30u, 0x2E7A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A38u;
label_2e7a38:
    // 0x2e7a38: 0x54570010  bnel        $v0, $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7A38u;
    {
        const bool branch_taken_0x2e7a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x2e7a38) {
            ctx->pc = 0x2E7A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A38u;
            // 0x2e7a3c: 0x26b50028  addiu       $s5, $s5, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A7Cu;
            goto label_2e7a7c;
        }
    }
    ctx->pc = 0x2E7A40u;
    // 0x2e7a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e7a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7a48: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x2e7a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2e7a4c: 0xc0b9a58  jal         func_2E6960
    ctx->pc = 0x2E7A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A54u);
    ctx->pc = 0x2E7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A4Cu;
    // 0x2e7a50: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E7A4Cu, 0x2E7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A54u;
label_2e7a54:
    // 0x2e7a54: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2e7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2e7a58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7A58u;
    {
        const bool branch_taken_0x2e7a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a58) {
            ctx->pc = 0x2E7A68u;
            goto label_2e7a68;
        }
    }
    ctx->pc = 0x2E7A60u;
    // 0x2e7a60: 0xc0b9a40  jal         func_2E6900
    ctx->pc = 0x2E7A60u;
    SET_GPR_U32(ctx, 31, 0x2E7A68u);
    ctx->pc = 0x2E6900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6900u, 0x2E7A60u, 0x2E7A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A68u;
label_2e7a68:
    // 0x2e7a68: 0xc0b9a40  jal         func_2E6900
    ctx->pc = 0x2E7A68u;
    SET_GPR_U32(ctx, 31, 0x2E7A70u);
    ctx->pc = 0x2E7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A68u;
    // 0x2e7a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6900u, 0x2E7A68u, 0x2E7A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A70u;
label_2e7a70:
    // 0x2e7a70: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E7A70u;
    {
        const bool branch_taken_0x2e7a70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a70) {
            ctx->pc = 0x2E7A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A70u;
            // 0x2e7a74: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7A78u;
            goto label_2e7a78;
        }
    }
    ctx->pc = 0x2E7A78u;
label_2e7a78:
    // 0x2e7a78: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x2e7a78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_2e7a7c:
    // 0x2e7a7c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2e7a7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2e7a80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e7a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e7a84: 0x1a40ffd0  blez        $s2, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2E7A84u;
    {
        const bool branch_taken_0x2e7a84 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2E7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A84u;
        // 0x2e7a88: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a84) {
            ctx->pc = 0x2E79C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e79c8;
        }
    }
    ctx->pc = 0x2E7A8Cu;
    // 0x2e7a8c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x2e7a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a90: 0x5620ffc7  bnel        $s1, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2E7A90u;
    {
        const bool branch_taken_0x2e7a90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a90) {
            ctx->pc = 0x2E7A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7A90u;
            // 0x2e7a94: 0x8e360000  lw          $s6, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E79B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e79b0;
        }
    }
    ctx->pc = 0x2E7A98u;
    // 0x2e7a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2e7a9c:
    // 0x2e7a9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7A9Cu;
    {
        const bool branch_taken_0x2e7a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A9Cu;
        // 0x2e7aa0: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a9c) {
            ctx->pc = 0x2E7AB4u;
            goto label_2e7ab4;
        }
    }
    ctx->pc = 0x2E7AA4u;
    // 0x2e7aa4: 0xc098560  jal         func_261580
    ctx->pc = 0x2E7AA4u;
    SET_GPR_U32(ctx, 31, 0x2E7AACu);
    ctx->pc = 0x2E7AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AA4u;
    // 0x2e7aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2E7AA4u, 0x2E7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AACu;
label_2e7aac:
    // 0x2e7aac: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2e7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2e7ab0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2e7ab4:
    // 0x2e7ab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e7ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ab8: 0xc043334  jal         func_10CCD0
    ctx->pc = 0x2E7AB8u;
    SET_GPR_U32(ctx, 31, 0x2E7AC0u);
    ctx->pc = 0x2E7ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AB8u;
    // 0x2e7abc: 0x8c64ea14  lw          $a0, -0x15EC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCD0u, 0x2E7AB8u, 0x2E7AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AC0u;
label_2e7ac0:
    // 0x2e7ac0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7AC0u;
    {
        const bool branch_taken_0x2e7ac0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AC0u;
        // 0x2e7ac4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ac0) {
            ctx->pc = 0x2E7AD0u;
            goto label_2e7ad0;
        }
    }
    ctx->pc = 0x2E7AC8u;
label_2e7ac8:
    // 0x2e7ac8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2E7AC8u;
    {
        const bool branch_taken_0x2e7ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AC8u;
        // 0x2e7acc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ac8) {
            ctx->pc = 0x2E7C14u;
            goto label_2e7c14;
        }
    }
    ctx->pc = 0x2E7AD0u;
label_2e7ad0:
    // 0x2e7ad0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2e7ad4:
    if (ctx->pc == 0x2E7AD4u) {
        ctx->pc = 0x2E7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD0u;
        // 0x2e7ad4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7AD8u;
        goto label_fallthrough_0x2e7ad0;
    }
    ctx->pc = 0x2E7AD0u;
    {
        const bool branch_taken_0x2e7ad0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AD0u;
        // 0x2e7ad4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ad0) {
            ctx->pc = 0x2E7AE0u;
            goto label_2e7ae0;
        }
    }
label_fallthrough_0x2e7ad0:
    ctx->pc = 0x2E7AD8u;
    // 0x2e7ad8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2E7AD8u;
    SET_GPR_U32(ctx, 31, 0x2E7AE0u);
    ctx->pc = 0x2E7ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AD8u;
    // 0x2e7adc: 0x8c44ea14  lw          $a0, -0x15EC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2E7AD8u, 0x2E7AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AE0u;
label_2e7ae0:
    // 0x2e7ae0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e7ae4: 0x8c43ea30  lw          $v1, -0x15D0($v0)
    ctx->pc = 0x2e7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961712)));
    // 0x2e7ae8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7AE8u;
    {
        const bool branch_taken_0x2e7ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7AE8u;
        // 0x2e7aec: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ae8) {
            ctx->pc = 0x2E7AFCu;
            goto label_2e7afc;
        }
    }
    ctx->pc = 0x2E7AF0u;
    // 0x2e7af0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e7af4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E7AF4u;
    SET_GPR_U32(ctx, 31, 0x2E7AFCu);
    ctx->pc = 0x2E7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7AF4u;
    // 0x2e7af8: 0x24a5fa78  addiu       $a1, $a1, -0x588 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7AF4u, 0x2E7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7AFCu;
label_2e7afc:
    // 0x2e7afc: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2e7afcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2e7b00: 0x8e02ea2c  lw          $v0, -0x15D4($s0)
    ctx->pc = 0x2e7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961708)));
    // 0x2e7b04: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7B04u;
    {
        const bool branch_taken_0x2e7b04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B04u;
        // 0x2e7b08: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b04) {
            ctx->pc = 0x2E7B1Cu;
            goto label_2e7b1c;
        }
    }
    ctx->pc = 0x2E7B0Cu;
    // 0x2e7b0c: 0xc0ba13c  jal         func_2E84F0
    ctx->pc = 0x2E7B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B14u);
    ctx->pc = 0x2E84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E84F0u, 0x2E7B0Cu, 0x2E7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B14u;
label_2e7b14:
    // 0x2e7b14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E7B14u;
    {
        const bool branch_taken_0x2e7b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B14u;
        // 0x2e7b18: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b14) {
            ctx->pc = 0x2E7B44u;
            goto label_2e7b44;
        }
    }
    ctx->pc = 0x2E7B1Cu;
label_2e7b1c:
    // 0x2e7b1c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7B1Cu;
    {
        const bool branch_taken_0x2e7b1c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e7b1c) {
            ctx->pc = 0x2E7B38u;
            goto label_2e7b38;
        }
    }
    ctx->pc = 0x2E7B24u;
    // 0x2e7b24: 0xc0ba13c  jal         func_2E84F0
    ctx->pc = 0x2E7B24u;
    SET_GPR_U32(ctx, 31, 0x2E7B2Cu);
    ctx->pc = 0x2E84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E84F0u, 0x2E7B24u, 0x2E7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B2Cu;
label_2e7b2c:
    // 0x2e7b2c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2e7b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2e7b30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7B30u;
    {
        const bool branch_taken_0x2e7b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B30u;
        // 0x2e7b34: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b30) {
            ctx->pc = 0x2E7B44u;
            goto label_2e7b44;
        }
    }
    ctx->pc = 0x2E7B38u;
label_2e7b38:
    // 0x2e7b38: 0xc0ba11c  jal         func_2E8470
    ctx->pc = 0x2E7B38u;
    SET_GPR_U32(ctx, 31, 0x2E7B40u);
    ctx->pc = 0x2E8470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8470u, 0x2E7B38u, 0x2E7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B40u;
label_2e7b40:
    // 0x2e7b40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e7b40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b44:
    // 0x2e7b44: 0x8e02ea2c  lw          $v0, -0x15D4($s0)
    ctx->pc = 0x2e7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961708)));
    // 0x2e7b48: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E7B48u;
    {
        const bool branch_taken_0x2e7b48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B48u;
        // 0x2e7b4c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b48) {
            ctx->pc = 0x2E7BECu;
            goto label_2e7bec;
        }
    }
    ctx->pc = 0x2E7B50u;
    // 0x2e7b50: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E7B50u;
    {
        const bool branch_taken_0x2e7b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B50u;
        // 0x2e7b54: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b50) {
            ctx->pc = 0x2E7BA8u;
            goto label_2e7ba8;
        }
    }
    ctx->pc = 0x2E7B58u;
    // 0x2e7b58: 0x8c51ea08  lw          $s1, -0x15F8($v0)
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e7b5c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7B5Cu;
    {
        const bool branch_taken_0x2e7b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B5Cu;
        // 0x2e7b60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b5c) {
            ctx->pc = 0x2E7BA0u;
            goto label_2e7ba0;
        }
    }
    ctx->pc = 0x2E7B64u;
    // 0x2e7b64: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x2e7b64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7b68:
    // 0x2e7b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e7b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b6c: 0x0  nop
    ctx->pc = 0x2e7b6cu;
    // NOP
label_2e7b70:
    // 0x2e7b70: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2e7b70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7b74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e7b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b7c: 0xc0b9b58  jal         func_2E6D60
    ctx->pc = 0x2E7B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B84u);
    ctx->pc = 0x2E7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B7Cu;
    // 0x2e7b80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6D60u, 0x2E7B7Cu, 0x2E7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B84u;
label_2e7b84:
    // 0x2e7b84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e7b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e7b88: 0x1a40fff9  blez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2E7B88u;
    {
        const bool branch_taken_0x2e7b88 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2E7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B88u;
        // 0x2e7b8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b88) {
            ctx->pc = 0x2E7B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7b70;
        }
    }
    ctx->pc = 0x2E7B90u;
    // 0x2e7b90: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2e7b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e7b94: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E7B94u;
    {
        const bool branch_taken_0x2e7b94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B94u;
        // 0x2e7b98: 0x8fb00040  lw          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b94) {
            ctx->pc = 0x2E7B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7b68;
        }
    }
    ctx->pc = 0x2E7B9Cu;
    // 0x2e7b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7ba0:
    // 0x2e7ba0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E7BA0u;
    {
        const bool branch_taken_0x2e7ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BA0u;
        // 0x2e7ba4: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ba0) {
            ctx->pc = 0x2E7BECu;
            goto label_2e7bec;
        }
    }
    ctx->pc = 0x2E7BA8u;
label_2e7ba8:
    // 0x2e7ba8: 0x8c51ea08  lw          $s1, -0x15F8($v0)
    ctx->pc = 0x2e7ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e7bac: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7BACu;
    {
        const bool branch_taken_0x2e7bac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BACu;
        // 0x2e7bb0: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bac) {
            ctx->pc = 0x2E7BF0u;
            goto label_2e7bf0;
        }
    }
    ctx->pc = 0x2E7BB4u;
    // 0x2e7bb4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7BB4u;
    {
        const bool branch_taken_0x2e7bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BB4u;
        // 0x2e7bb8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bb4) {
            ctx->pc = 0x2E7BDCu;
            goto label_2e7bdc;
        }
    }
    ctx->pc = 0x2E7BBCu;
    // 0x2e7bbc: 0x0  nop
    ctx->pc = 0x2e7bbcu;
    // NOP
label_2e7bc0:
    // 0x2e7bc0: 0xc0b9a40  jal         func_2E6900
    ctx->pc = 0x2E7BC0u;
    SET_GPR_U32(ctx, 31, 0x2E7BC8u);
    ctx->pc = 0x2E7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BC0u;
    // 0x2e7bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6900u, 0x2E7BC0u, 0x2E7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BC8u;
label_2e7bc8:
    // 0x2e7bc8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x2e7bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e7bcc: 0x1620fffc  bnez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E7BCCu;
    {
        const bool branch_taken_0x2e7bcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BCCu;
        // 0x2e7bd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bcc) {
            ctx->pc = 0x2E7BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7bc0;
        }
    }
    ctx->pc = 0x2E7BD4u;
    // 0x2e7bd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7BD4u;
    {
        const bool branch_taken_0x2e7bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BD4u;
        // 0x2e7bd8: 0x8e04ea1c  lw          $a0, -0x15E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bd4) {
            ctx->pc = 0x2E7BE4u;
            goto label_2e7be4;
        }
    }
    ctx->pc = 0x2E7BDCu;
label_2e7bdc:
    // 0x2e7bdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7be0: 0x8e04ea1c  lw          $a0, -0x15E4($s0)
    ctx->pc = 0x2e7be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961692)));
label_2e7be4:
    // 0x2e7be4: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2E7BE4u;
    SET_GPR_U32(ctx, 31, 0x2E7BECu);
    ctx->pc = 0x2E7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BE4u;
    // 0x2e7be8: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2E7BE4u, 0x2E7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BECu;
label_2e7bec:
    // 0x2e7bec: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2e7becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2e7bf0:
    // 0x2e7bf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7bf4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7BF4u;
    {
        const bool branch_taken_0x2e7bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BF4u;
        // 0x2e7bf8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bf4) {
            ctx->pc = 0x2E7C04u;
            goto label_2e7c04;
        }
    }
    ctx->pc = 0x2E7BFCu;
    // 0x2e7bfc: 0x5260fe4e  beql        $s3, $zero, . + 4 + (-0x1B2 << 2)
    ctx->pc = 0x2E7BFCu;
    {
        const bool branch_taken_0x2e7bfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7bfc) {
            ctx->pc = 0x2E7C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7BFCu;
            // 0x2e7c00: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7538;
        }
    }
    ctx->pc = 0x2E7C04u;
label_2e7c04:
    // 0x2e7c04: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e7c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e7c08: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E7C08u;
    SET_GPR_U32(ctx, 31, 0x2E7C10u);
    ctx->pc = 0x2E7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7C08u;
    // 0x2e7c0c: 0x24a5fa98  addiu       $a1, $a1, -0x568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7C08u, 0x2E7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C10u;
label_2e7c10:
    // 0x2e7c10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7c14:
    // 0x2e7c14: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2e7c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e7c18: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2e7c18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e7c1c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2e7c1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e7c20: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2e7c20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e7c24: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2e7c24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7c28: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2e7c28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7c2c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2e7c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e7c30: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2e7c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e7c34: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2e7c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7c38: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2e7c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C3Cu;
        // 0x2e7c40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7C44u;
    // 0x2e7c44: 0x0  nop
    ctx->pc = 0x2e7c44u;
    // NOP
}
