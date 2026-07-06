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

// Function: sub_002AC210
// Address: 0x2ac210 - 0x2ac400
void sub_002AC210_0x2ac210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC210_0x2ac210");
#endif

    switch (ctx->pc) {
        case 0x2ac248u: goto label_2ac248;
        case 0x2ac25cu: goto label_2ac25c;
        case 0x2ac280u: goto label_2ac280;
        case 0x2ac298u: goto label_2ac298;
        case 0x2ac2b4u: goto label_2ac2b4;
        case 0x2ac2c4u: goto label_2ac2c4;
        case 0x2ac2e4u: goto label_2ac2e4;
        case 0x2ac2fcu: goto label_2ac2fc;
        case 0x2ac32cu: goto label_2ac32c;
        case 0x2ac344u: goto label_2ac344;
        case 0x2ac368u: goto label_2ac368;
        case 0x2ac390u: goto label_2ac390;
        case 0x2ac3dcu: goto label_2ac3dc;
        default: break;
    }

    ctx->pc = 0x2ac210u;

    // 0x2ac210: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ac210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ac214: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2ac214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2ac218: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2ac218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2ac21c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2ac21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2ac220: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ac220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac224: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ac224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ac228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac22c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2ac22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2ac230: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ac230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ac234: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2ac234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2ac238: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ac238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ac23c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2ac23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ac240: 0xc0ae652  jal         func_2B9948
    ctx->pc = 0x2AC240u;
    SET_GPR_U32(ctx, 31, 0x2AC248u);
    ctx->pc = 0x2AC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC240u;
    // 0x2ac244: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9948u, 0x2AC240u, 0x2AC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC248u;
label_2ac248:
    // 0x2ac248: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC248u;
    {
        const bool branch_taken_0x2ac248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC248u;
        // 0x2ac24c: 0x26220068  addiu       $v0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac248) {
            ctx->pc = 0x2AC26Cu;
            goto label_2ac26c;
        }
    }
    ctx->pc = 0x2AC250u;
    // 0x2ac250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac254: 0xc0acbea  jal         func_2B2FA8
    ctx->pc = 0x2AC254u;
    SET_GPR_U32(ctx, 31, 0x2AC25Cu);
    ctx->pc = 0x2AC258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC254u;
    // 0x2ac258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FA8u, 0x2AC254u, 0x2AC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC25Cu;
label_2ac25c:
    // 0x2ac25c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac260: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x2ac260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2ac264: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2AC264u;
    {
        const bool branch_taken_0x2ac264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC264u;
        // 0x2ac268: 0x240600ce  addiu       $a2, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac264) {
            ctx->pc = 0x2AC3D0u;
            goto label_2ac3d0;
        }
    }
    ctx->pc = 0x2AC26Cu;
label_2ac26c:
    // 0x2ac26c: 0x26230074  addiu       $v1, $s1, 0x74
    ctx->pc = 0x2ac26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    // 0x2ac270: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2ac270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ac274: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ac274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac278: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2ac278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2ac27c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2ac27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ac280:
    // 0x2ac280: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ac284: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ac284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ac288: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC288u;
    {
        const bool branch_taken_0x2ac288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac288) {
            ctx->pc = 0x2AC28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC288u;
            // 0x2ac28c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC2ACu;
            goto label_2ac2ac;
        }
    }
    ctx->pc = 0x2AC290u;
    // 0x2ac290: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2AC290u;
    SET_GPR_U32(ctx, 31, 0x2AC298u);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x2AC290u, 0x2AC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC298u;
label_2ac298:
    // 0x2ac298: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ac29c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2AC29Cu;
    {
        const bool branch_taken_0x2ac29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC29Cu;
        // 0x2ac2a0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac29c) {
            ctx->pc = 0x2AC3C4u;
            goto label_2ac3c4;
        }
    }
    ctx->pc = 0x2AC2A4u;
    // 0x2ac2a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ac2a8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2ac2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ac2ac:
    // 0x2ac2ac: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AC2ACu;
    SET_GPR_U32(ctx, 31, 0x2AC2B4u);
    ctx->pc = 0x2AC2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2ACu;
    // 0x2ac2b0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AC2ACu, 0x2AC2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2B4u;
label_2ac2b4:
    // 0x2ac2b4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2AC2B4u;
    {
        const bool branch_taken_0x2ac2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2B4u;
        // 0x2ac2b8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2b4) {
            ctx->pc = 0x2AC3C8u;
            goto label_2ac3c8;
        }
    }
    ctx->pc = 0x2AC2BCu;
    // 0x2ac2bc: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2AC2BCu;
    SET_GPR_U32(ctx, 31, 0x2AC2C4u);
    ctx->pc = 0x2AC2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2BCu;
    // 0x2ac2c0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2AC2BCu, 0x2AC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2C4u;
label_2ac2c4:
    // 0x2ac2c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ac2c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ac2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ac2cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ac2d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ac2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ac2d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC2D4u;
    {
        const bool branch_taken_0x2ac2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac2d4) {
            ctx->pc = 0x2AC2F4u;
            goto label_2ac2f4;
        }
    }
    ctx->pc = 0x2AC2DCu;
    // 0x2ac2dc: 0xc0a58b8  jal         func_2962E0
    ctx->pc = 0x2AC2DCu;
    SET_GPR_U32(ctx, 31, 0x2AC2E4u);
    ctx->pc = 0x2962E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962E0u, 0x2AC2DCu, 0x2AC2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2E4u;
label_2ac2e4:
    // 0x2ac2e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ac2e8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AC2E8u;
    {
        const bool branch_taken_0x2ac2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2E8u;
        // 0x2ac2ec: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2e8) {
            ctx->pc = 0x2AC3C4u;
            goto label_2ac3c4;
        }
    }
    ctx->pc = 0x2AC2F0u;
    // 0x2ac2f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac2f4:
    // 0x2ac2f4: 0xc0a587a  jal         func_2961E8
    ctx->pc = 0x2AC2F4u;
    SET_GPR_U32(ctx, 31, 0x2AC2FCu);
    ctx->pc = 0x2AC2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2F4u;
    // 0x2ac2f8: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961E8u, 0x2AC2F4u, 0x2AC2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2FCu;
label_2ac2fc:
    // 0x2ac2fc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2AC2FCu;
    {
        const bool branch_taken_0x2ac2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2FCu;
        // 0x2ac300: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2fc) {
            ctx->pc = 0x2AC3C4u;
            goto label_2ac3c4;
        }
    }
    ctx->pc = 0x2AC304u;
    // 0x2ac304: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2ac304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ac308: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2AC308u;
    {
        const bool branch_taken_0x2ac308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC308u;
        // 0x2ac30c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac308) {
            ctx->pc = 0x2AC280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac280;
        }
    }
    ctx->pc = 0x2AC310u;
    // 0x2ac310: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2ac310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2ac314: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac318: 0x24426e70  addiu       $v0, $v0, 0x6E70
    ctx->pc = 0x2ac318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x2ac31c: 0x8e30007c  lw          $s0, 0x7C($s1)
    ctx->pc = 0x2ac31cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2ac320: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2ac320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x2ac324: 0xc0a5b02  jal         func_296C08
    ctx->pc = 0x2AC324u;
    SET_GPR_U32(ctx, 31, 0x2AC32Cu);
    ctx->pc = 0x2AC328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC324u;
    // 0x2ac328: 0x8e340070  lw          $s4, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C08u, 0x2AC324u, 0x2AC32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC32Cu;
label_2ac32c:
    // 0x2ac32c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ac32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac330: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2ac330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac334: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2ac334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2ac338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac33c: 0xc0ab256  jal         func_2AC958
    ctx->pc = 0x2AC33Cu;
    SET_GPR_U32(ctx, 31, 0x2AC344u);
    ctx->pc = 0x2AC340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC33Cu;
    // 0x2ac340: 0xac6200a4  sw          $v0, 0xA4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC958u, 0x2AC33Cu, 0x2AC344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC344u;
label_2ac344:
    // 0x2ac344: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x2ac344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac34c: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x2ac34cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ac350: 0x24c600a8  addiu       $a2, $a2, 0xA8
    ctx->pc = 0x2ac350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 168));
    // 0x2ac354: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2ac354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac358: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x2ac358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2ac35c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2ac35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2ac360: 0xc0a58e8  jal         func_2963A0
    ctx->pc = 0x2AC360u;
    SET_GPR_U32(ctx, 31, 0x2AC368u);
    ctx->pc = 0x2AC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC360u;
    // 0x2ac364: 0x53300b  movn        $a2, $v0, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2963A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963A0u, 0x2AC360u, 0x2AC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC368u;
label_2ac368:
    // 0x2ac368: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AC368u;
    {
        const bool branch_taken_0x2ac368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC368u;
        // 0x2ac36c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac368) {
            ctx->pc = 0x2AC3C4u;
            goto label_2ac3c4;
        }
    }
    ctx->pc = 0x2AC370u;
    // 0x2ac370: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x2ac370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac374: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x2ac374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ac378: 0x24c600a8  addiu       $a2, $a2, 0xA8
    ctx->pc = 0x2ac378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 168));
    // 0x2ac37c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2ac37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac380: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x2ac380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2ac384: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2ac384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2ac388: 0xc0a5908  jal         func_296420
    ctx->pc = 0x2AC388u;
    SET_GPR_U32(ctx, 31, 0x2AC390u);
    ctx->pc = 0x2AC38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC388u;
    // 0x2ac38c: 0x53300a  movz        $a2, $v0, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296420u, 0x2AC388u, 0x2AC390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC390u;
label_2ac390:
    // 0x2ac390: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AC390u;
    {
        const bool branch_taken_0x2ac390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC390u;
        // 0x2ac394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac390) {
            ctx->pc = 0x2AC3C4u;
            goto label_2ac3c4;
        }
    }
    ctx->pc = 0x2AC398u;
    // 0x2ac398: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x2ac398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac39c: 0x24c400a8  addiu       $a0, $a2, 0xA8
    ctx->pc = 0x2ac39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 168));
    // 0x2ac3a0: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x2ac3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2ac3a4: 0x93180b  movn        $v1, $a0, $s3
    ctx->pc = 0x2ac3a4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2ac3a8: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x2ac3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x2ac3ac: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2ac3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac3b0: 0x24a400a8  addiu       $a0, $a1, 0xA8
    ctx->pc = 0x2ac3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
    // 0x2ac3b4: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x2ac3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2ac3b8: 0x93180a  movz        $v1, $a0, $s3
    ctx->pc = 0x2ac3b8u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2ac3bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC3BCu;
    {
        const bool branch_taken_0x2ac3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3BCu;
        // 0x2ac3c0: 0xaca30068  sw          $v1, 0x68($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3bc) {
            ctx->pc = 0x2AC3E0u;
            goto label_2ac3e0;
        }
    }
    ctx->pc = 0x2AC3C4u;
label_2ac3c4:
    // 0x2ac3c4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ac3c8:
    // 0x2ac3c8: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x2ac3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2ac3cc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2ac3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2ac3d0:
    // 0x2ac3d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac3d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac3d4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AC3D4u;
    SET_GPR_U32(ctx, 31, 0x2AC3DCu);
    ctx->pc = 0x2AC3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC3D4u;
    // 0x2ac3d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AC3D4u, 0x2AC3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3DCu;
label_2ac3dc:
    // 0x2ac3dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ac3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac3e0:
    // 0x2ac3e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ac3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ac3e4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2ac3e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ac3e8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2ac3e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ac3ec: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ac3ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac3f0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2ac3f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac3f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ac3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3F8u;
        // 0x2ac3fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC400u;
}
