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

// Function: sub_001C2980
// Address: 0x1c2980 - 0x1c2b40
void sub_001C2980_0x1c2980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2980_0x1c2980");
#endif

    switch (ctx->pc) {
        case 0x1c2994u: goto label_1c2994;
        case 0x1c29b0u: goto label_1c29b0;
        case 0x1c2a1cu: goto label_1c2a1c;
        case 0x1c2a3cu: goto label_1c2a3c;
        case 0x1c2a44u: goto label_1c2a44;
        case 0x1c2a4cu: goto label_1c2a4c;
        case 0x1c2a54u: goto label_1c2a54;
        case 0x1c2a60u: goto label_1c2a60;
        case 0x1c2ab0u: goto label_1c2ab0;
        case 0x1c2ad0u: goto label_1c2ad0;
        case 0x1c2ad8u: goto label_1c2ad8;
        case 0x1c2ae0u: goto label_1c2ae0;
        case 0x1c2ae8u: goto label_1c2ae8;
        case 0x1c2af4u: goto label_1c2af4;
        case 0x1c2b0cu: goto label_1c2b0c;
        case 0x1c2b20u: goto label_1c2b20;
        default: break;
    }

    ctx->pc = 0x1c2980u;

    // 0x1c2980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c2988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c298c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1C298Cu;
    SET_GPR_U32(ctx, 31, 0x1C2994u);
    ctx->pc = 0x1C2990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C298Cu;
    // 0x1c2990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1C298Cu, 0x1C2994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2994u;
label_1c2994:
    // 0x1c2994: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c2994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2998: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C2998u;
    {
        const bool branch_taken_0x1c2998 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2998u;
        // 0x1c299c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2998) {
            ctx->pc = 0x1C29E8u;
            goto label_1c29e8;
        }
    }
    ctx->pc = 0x1C29A0u;
    // 0x1c29a0: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x1c29a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c29a4: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x1c29a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1c29a8: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x1c29a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1c29ac: 0x0  nop
    ctx->pc = 0x1c29acu;
    // NOP
label_1c29b0:
    // 0x1c29b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c29b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c29b4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c29b8: 0xc7282b  sltu        $a1, $a2, $a3
    ctx->pc = 0x1c29b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c29bc: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C29BCu;
    {
        const bool branch_taken_0x1c29bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x1C29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29BCu;
        // 0x1c29c0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29bc) {
            ctx->pc = 0x1C29CCu;
            goto label_1c29cc;
        }
    }
    ctx->pc = 0x1C29C4u;
    // 0x1c29c4: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1c29c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c29c8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1c29c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c29cc:
    // 0x1c29cc: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x1c29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x1c29d0: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x1c29d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1c29d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C29D4u;
    {
        const bool branch_taken_0x1c29d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29D4u;
        // 0x1c29d8: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29d4) {
            ctx->pc = 0x1C29E0u;
            goto label_1c29e0;
        }
    }
    ctx->pc = 0x1C29DCu;
    // 0x1c29dc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1c29dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c29e0:
    // 0x1c29e0: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C29E0u;
    {
        const bool branch_taken_0x1c29e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29E0u;
        // 0x1c29e4: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29e0) {
            ctx->pc = 0x1C29B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c29b0;
        }
    }
    ctx->pc = 0x1C29E8u;
label_1c29e8:
    // 0x1c29e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c29e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c29ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c29ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c29f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C29F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29F0u;
        // 0x1c29f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C29F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C29F8u;
    // 0x1c29f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c29f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c29fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c29fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c2a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c2a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a08: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c2a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c2a0c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C2A0Cu;
    {
        const bool branch_taken_0x1c2a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A0Cu;
        // 0x1c2a10: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a0c) {
            ctx->pc = 0x1C2A6Cu;
            goto label_1c2a6c;
        }
    }
    ctx->pc = 0x1C2A14u;
    // 0x1c2a14: 0xc070f0c  jal         func_1C3C30
    ctx->pc = 0x1C2A14u;
    SET_GPR_U32(ctx, 31, 0x1C2A1Cu);
    ctx->pc = 0x1C2A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A14u;
    // 0x1c2a18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3C30u, 0x1C2A14u, 0x1C2A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A1Cu;
label_1c2a1c:
    // 0x1c2a1c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c2a20: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c2a24: 0x2471e860  addiu       $s1, $v1, -0x17A0
    ctx->pc = 0x1c2a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
    // 0x1c2a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a2c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2A2Cu;
    {
        const bool branch_taken_0x1c2a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A2Cu;
        // 0x1c2a30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a2c) {
            ctx->pc = 0x1C2A68u;
            goto label_1c2a68;
        }
    }
    ctx->pc = 0x1C2A34u;
    // 0x1c2a34: 0xc070cf0  jal         func_1C33C0
    ctx->pc = 0x1C2A34u;
    SET_GPR_U32(ctx, 31, 0x1C2A3Cu);
    ctx->pc = 0x1C33C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33C0u, 0x1C2A34u, 0x1C2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A3Cu;
label_1c2a3c:
    // 0x1c2a3c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2A44u);
    ctx->pc = 0x1C2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A3Cu;
    // 0x1c2a40: 0x34048100  ori         $a0, $zero, 0x8100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C2A3Cu, 0x1C2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A44u;
label_1c2a44:
    // 0x1c2a44: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C2A44u;
    SET_GPR_U32(ctx, 31, 0x1C2A4Cu);
    ctx->pc = 0x1C2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A44u;
    // 0x1c2a48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C2A44u, 0x1C2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A4Cu;
label_1c2a4c:
    // 0x1c2a4c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C2A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2A54u);
    ctx->pc = 0x1C2A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A4Cu;
    // 0x1c2a50: 0x34048101  ori         $a0, $zero, 0x8101 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C2A4Cu, 0x1C2A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A54u;
label_1c2a54:
    // 0x1c2a54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a58: 0xc0709e0  jal         func_1C2780
    ctx->pc = 0x1C2A58u;
    SET_GPR_U32(ctx, 31, 0x1C2A60u);
    ctx->pc = 0x1C2A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A58u;
    // 0x1c2a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2780u, 0x1C2A58u, 0x1C2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A60u;
label_1c2a60:
    // 0x1c2a60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2A60u;
    {
        const bool branch_taken_0x1c2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A60u;
        // 0x1c2a64: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a60) {
            ctx->pc = 0x1C2A70u;
            goto label_1c2a70;
        }
    }
    ctx->pc = 0x1C2A68u;
label_1c2a68:
    // 0x1c2a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2a6c:
    // 0x1c2a6c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c2a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2a70:
    // 0x1c2a70: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c2a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2a74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c2a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A78u;
        // 0x1c2a7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2A80u;
    // 0x1c2a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2a84: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c2a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c2a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a8c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c2a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c2a90: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2A90u;
    {
        const bool branch_taken_0x1c2a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A90u;
        // 0x1c2a94: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a90) {
            ctx->pc = 0x1C2AA8u;
            goto label_1c2aa8;
        }
    }
    ctx->pc = 0x1C2A98u;
    // 0x1c2a98: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2a9c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C2A9Cu;
    {
        const bool branch_taken_0x1c2a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A9Cu;
        // 0x1c2aa0: 0x24a59d18  addiu       $a1, $a1, -0x62E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a9c) {
            ctx->pc = 0x1C2B18u;
            goto label_1c2b18;
        }
    }
    ctx->pc = 0x1C2AA4u;
    // 0x1c2aa4: 0x0  nop
    ctx->pc = 0x1c2aa4u;
    // NOP
label_1c2aa8:
    // 0x1c2aa8: 0xc070f0c  jal         func_1C3C30
    ctx->pc = 0x1C2AA8u;
    SET_GPR_U32(ctx, 31, 0x1C2AB0u);
    ctx->pc = 0x1C2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AA8u;
    // 0x1c2aac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3C30u, 0x1C2AA8u, 0x1C2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AB0u;
label_1c2ab0:
    // 0x1c2ab0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c2ab4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c2ab8: 0x2471e860  addiu       $s1, $v1, -0x17A0
    ctx->pc = 0x1c2ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
    // 0x1c2abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ac0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C2AC0u;
    {
        const bool branch_taken_0x1c2ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AC0u;
        // 0x1c2ac4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ac0) {
            ctx->pc = 0x1C2B2Cu;
            goto label_1c2b2c;
        }
    }
    ctx->pc = 0x1C2AC8u;
    // 0x1c2ac8: 0xc070cf0  jal         func_1C33C0
    ctx->pc = 0x1C2AC8u;
    SET_GPR_U32(ctx, 31, 0x1C2AD0u);
    ctx->pc = 0x1C33C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33C0u, 0x1C2AC8u, 0x1C2AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AD0u;
label_1c2ad0:
    // 0x1c2ad0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C2AD0u;
    SET_GPR_U32(ctx, 31, 0x1C2AD8u);
    ctx->pc = 0x1C2AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AD0u;
    // 0x1c2ad4: 0x34048200  ori         $a0, $zero, 0x8200 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C2AD0u, 0x1C2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AD8u;
label_1c2ad8:
    // 0x1c2ad8: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C2AD8u;
    SET_GPR_U32(ctx, 31, 0x1C2AE0u);
    ctx->pc = 0x1C2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AD8u;
    // 0x1c2adc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C2AD8u, 0x1C2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AE0u;
label_1c2ae0:
    // 0x1c2ae0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C2AE0u;
    SET_GPR_U32(ctx, 31, 0x1C2AE8u);
    ctx->pc = 0x1C2AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AE0u;
    // 0x1c2ae4: 0x34048201  ori         $a0, $zero, 0x8201 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33281);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C2AE0u, 0x1C2AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AE8u;
label_1c2ae8:
    // 0x1c2ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2aec: 0xc0709e0  jal         func_1C2780
    ctx->pc = 0x1C2AECu;
    SET_GPR_U32(ctx, 31, 0x1C2AF4u);
    ctx->pc = 0x1C2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AECu;
    // 0x1c2af0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2780u, 0x1C2AECu, 0x1C2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AF4u;
label_1c2af4:
    // 0x1c2af4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c2af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c2af8: 0x24849d48  addiu       $a0, $a0, -0x62B8
    ctx->pc = 0x1c2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942024));
    // 0x1c2afc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2AFCu;
    {
        const bool branch_taken_0x1c2afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AFCu;
        // 0x1c2b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2afc) {
            ctx->pc = 0x1C2B28u;
            goto label_1c2b28;
        }
    }
    ctx->pc = 0x1C2B04u;
    // 0x1c2b04: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C2B04u;
    SET_GPR_U32(ctx, 31, 0x1C2B0Cu);
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C2B04u, 0x1C2B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B0Cu;
label_1c2b0c:
    // 0x1c2b0c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c2b10: 0x24a59d70  addiu       $a1, $a1, -0x6290
    ctx->pc = 0x1c2b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
    // 0x1c2b14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b18:
    // 0x1c2b18: 0xc0709d4  jal         func_1C2750
    ctx->pc = 0x1C2B18u;
    SET_GPR_U32(ctx, 31, 0x1C2B20u);
    ctx->pc = 0x1C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2750u, 0x1C2B18u, 0x1C2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B20u;
label_1c2b20:
    // 0x1c2b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2B20u;
    {
        const bool branch_taken_0x1c2b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B20u;
        // 0x1c2b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b20) {
            ctx->pc = 0x1C2B2Cu;
            goto label_1c2b2c;
        }
    }
    ctx->pc = 0x1C2B28u;
label_1c2b28:
    // 0x1c2b28: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c2b2c:
    // 0x1c2b2c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c2b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2b30: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c2b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2b34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c2b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B38u;
        // 0x1c2b3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2B40u;
}
