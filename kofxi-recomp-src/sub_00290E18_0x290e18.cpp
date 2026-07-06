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

// Function: sub_00290E18
// Address: 0x290e18 - 0x290f60
void sub_00290E18_0x290e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290E18_0x290e18");
#endif

    switch (ctx->pc) {
        case 0x290e5cu: goto label_290e5c;
        case 0x290e80u: goto label_290e80;
        case 0x290e94u: goto label_290e94;
        case 0x290eccu: goto label_290ecc;
        case 0x290ee4u: goto label_290ee4;
        case 0x290f04u: goto label_290f04;
        case 0x290f38u: goto label_290f38;
        default: break;
    }

    ctx->pc = 0x290e18u;

    // 0x290e18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x290e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x290e1c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x290e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x290e20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x290e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x290e24: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x290e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x290e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x290e2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x290e2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x290e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x290e34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x290e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x290e3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x290e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e40: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290E40u;
    {
        const bool branch_taken_0x290e40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E40u;
        // 0x290e44: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e40) {
            ctx->pc = 0x290E54u;
            goto label_290e54;
        }
    }
    ctx->pc = 0x290E48u;
    // 0x290e48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x290e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290e4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x290E4Cu;
    {
        const bool branch_taken_0x290e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E4Cu;
        // 0x290e50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e4c) {
            ctx->pc = 0x290E88u;
            goto label_290e88;
        }
    }
    ctx->pc = 0x290E54u;
label_290e54:
    // 0x290e54: 0xc0a72c8  jal         func_29CB20
    ctx->pc = 0x290E54u;
    SET_GPR_U32(ctx, 31, 0x290E5Cu);
    ctx->pc = 0x29CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CB20u, 0x290E54u, 0x290E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E5Cu;
label_290e5c:
    // 0x290e5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e60: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x290E60u;
    {
        const bool branch_taken_0x290e60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e60) {
            ctx->pc = 0x290E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E60u;
            // 0x290e64: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E8Cu;
            goto label_290e8c;
        }
    }
    ctx->pc = 0x290E68u;
    // 0x290e68: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x290e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x290e6c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x290e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x290e70: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x290e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x290e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e78: 0xc0a5648  jal         func_295920
    ctx->pc = 0x290E78u;
    SET_GPR_U32(ctx, 31, 0x290E80u);
    ctx->pc = 0x290E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E78u;
    // 0x290e7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x290E78u, 0x290E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E80u;
label_290e80:
    // 0x290e80: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x290E80u;
    {
        const bool branch_taken_0x290e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E80u;
        // 0x290e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e80) {
            ctx->pc = 0x290F3Cu;
            goto label_290f3c;
        }
    }
    ctx->pc = 0x290E88u;
label_290e88:
    // 0x290e88: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x290e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_290e8c:
    // 0x290e8c: 0xc0a7320  jal         func_29CC80
    ctx->pc = 0x290E8Cu;
    SET_GPR_U32(ctx, 31, 0x290E94u);
    ctx->pc = 0x290E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E8Cu;
    // 0x290e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC80u, 0x290E8Cu, 0x290E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E94u;
label_290e94:
    // 0x290e94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x290e94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290e98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x290e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x290e9c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290E9Cu;
    {
        const bool branch_taken_0x290e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x290EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E9Cu;
        // 0x290ea0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e9c) {
            ctx->pc = 0x290EBCu;
            goto label_290ebc;
        }
    }
    ctx->pc = 0x290EA4u;
    // 0x290ea4: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x290ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x290ea8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x290EA8u;
    {
        const bool branch_taken_0x290ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x290EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EA8u;
        // 0x290eac: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ea8) {
            ctx->pc = 0x290ED4u;
            goto label_290ed4;
        }
    }
    ctx->pc = 0x290EB0u;
    // 0x290eb0: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x290eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x290eb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x290EB4u;
    {
        const bool branch_taken_0x290eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EB4u;
        // 0x290eb8: 0x2406008f  addiu       $a2, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290eb4) {
            ctx->pc = 0x290EF8u;
            goto label_290ef8;
        }
    }
    ctx->pc = 0x290EBCu;
label_290ebc:
    // 0x290ebc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x290ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ec0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x290ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ec4: 0xc0aa4cc  jal         func_2A9330
    ctx->pc = 0x290EC4u;
    SET_GPR_U32(ctx, 31, 0x290ECCu);
    ctx->pc = 0x290EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290EC4u;
    // 0x290ec8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9330u, 0x290EC4u, 0x290ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290ECCu;
label_290ecc:
    // 0x290ecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x290ECCu;
    {
        const bool branch_taken_0x290ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290ECCu;
        // 0x290ed0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ecc) {
            ctx->pc = 0x290EE8u;
            goto label_290ee8;
        }
    }
    ctx->pc = 0x290ED4u;
label_290ed4:
    // 0x290ed4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x290ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ed8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x290ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290edc: 0xc0a44c2  jal         func_291308
    ctx->pc = 0x290EDCu;
    SET_GPR_U32(ctx, 31, 0x290EE4u);
    ctx->pc = 0x290EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290EDCu;
    // 0x290ee0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291308u, 0x290EDCu, 0x290EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290EE4u;
label_290ee4:
    // 0x290ee4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x290ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_290ee8:
    // 0x290ee8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290EE8u;
    {
        const bool branch_taken_0x290ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EE8u;
        // 0x290eec: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ee8) {
            ctx->pc = 0x290F0Cu;
            goto label_290f0c;
        }
    }
    ctx->pc = 0x290EF0u;
    // 0x290ef0: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x290ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x290ef4: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x290ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_290ef8:
    // 0x290ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290efc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x290EFCu;
    SET_GPR_U32(ctx, 31, 0x290F04u);
    ctx->pc = 0x290F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290EFCu;
    // 0x290f00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x290EFCu, 0x290F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F04u;
label_290f04:
    // 0x290f04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x290F04u;
    {
        const bool branch_taken_0x290f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290f04) {
            ctx->pc = 0x290F1Cu;
            goto label_290f1c;
        }
    }
    ctx->pc = 0x290F0Cu;
label_290f0c:
    // 0x290f0c: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290F0Cu;
    {
        const bool branch_taken_0x290f0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x290f0c) {
            ctx->pc = 0x290F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F0Cu;
            // 0x290f10: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290F14u;
            goto label_290f14;
        }
    }
    ctx->pc = 0x290F14u;
label_290f14:
    // 0x290f14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x290F14u;
    {
        const bool branch_taken_0x290f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F14u;
        // 0x290f18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f14) {
            ctx->pc = 0x290F3Cu;
            goto label_290f3c;
        }
    }
    ctx->pc = 0x290F1Cu;
label_290f1c:
    // 0x290f1c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290F1Cu;
    {
        const bool branch_taken_0x290f1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x290f1c) {
            ctx->pc = 0x290F30u;
            goto label_290f30;
        }
    }
    ctx->pc = 0x290F24u;
    // 0x290f24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x290f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290f28: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290F28u;
    {
        const bool branch_taken_0x290f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x290F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F28u;
        // 0x290f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f28) {
            ctx->pc = 0x290F3Cu;
            goto label_290f3c;
        }
    }
    ctx->pc = 0x290F30u;
label_290f30:
    // 0x290f30: 0xc0a734a  jal         func_29CD28
    ctx->pc = 0x290F30u;
    SET_GPR_U32(ctx, 31, 0x290F38u);
    ctx->pc = 0x290F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F30u;
    // 0x290f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD28u, 0x290F30u, 0x290F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F38u;
label_290f38:
    // 0x290f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290f3c:
    // 0x290f3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x290f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290f40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x290f40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290f44: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x290f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290f48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x290f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290f4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x290f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290f54: 0x3e00008  jr          $ra
    ctx->pc = 0x290F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F54u;
        // 0x290f58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290F5Cu;
    // 0x290f5c: 0x0  nop
    ctx->pc = 0x290f5cu;
    // NOP
    if (ctx->pc == 0x290f5cu) { ctx->pc = 0x290f60u; }
}
