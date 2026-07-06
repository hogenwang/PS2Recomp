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

// Function: sub_00290F60
// Address: 0x290f60 - 0x291308
void sub_00290F60_0x290f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290F60_0x290f60");
#endif

    switch (ctx->pc) {
        case 0x290fc0u: goto label_290fc0;
        case 0x291008u: goto label_291008;
        case 0x291038u: goto label_291038;
        case 0x291098u: goto label_291098;
        case 0x2910d4u: goto label_2910d4;
        case 0x2910f4u: goto label_2910f4;
        case 0x291130u: goto label_291130;
        case 0x291150u: goto label_291150;
        case 0x29118cu: goto label_29118c;
        case 0x2911acu: goto label_2911ac;
        case 0x2911e8u: goto label_2911e8;
        case 0x291208u: goto label_291208;
        case 0x291244u: goto label_291244;
        case 0x291254u: goto label_291254;
        case 0x291260u: goto label_291260;
        case 0x2912a4u: goto label_2912a4;
        case 0x2912c8u: goto label_2912c8;
        case 0x2912dcu: goto label_2912dc;
        default: break;
    }

    ctx->pc = 0x290f60u;

    // 0x290f60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x290f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x290f64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x290f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x290f68: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x290f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x290f6c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x290f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x290f70: 0x24150082  addiu       $s5, $zero, 0x82
    ctx->pc = 0x290f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x290f74: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x290f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x290f78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x290f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f7c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x290f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x290f80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f84: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x290f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x290f88: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x290f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x290f8c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x290f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x290f90: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x290f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x290f94: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x290f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x290f98: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x290f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x290f9c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x290f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x290fa0: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x290fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x290fa4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x290FA4u;
    {
        const bool branch_taken_0x290fa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FA4u;
        // 0x290fa8: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fa4) {
            ctx->pc = 0x290FB8u;
            goto label_290fb8;
        }
    }
    ctx->pc = 0x290FACu;
    // 0x290fac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x290facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290fb0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290FB0u;
    {
        const bool branch_taken_0x290fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FB0u;
        // 0x290fb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fb0) {
            ctx->pc = 0x290FD8u;
            goto label_290fd8;
        }
    }
    ctx->pc = 0x290FB8u;
label_290fb8:
    // 0x290fb8: 0xc0a5160  jal         func_294580
    ctx->pc = 0x290FB8u;
    SET_GPR_U32(ctx, 31, 0x290FC0u);
    ctx->pc = 0x294580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294580u, 0x290FB8u, 0x290FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FC0u;
label_290fc0:
    // 0x290fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290fc4: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x290FC4u;
    {
        const bool branch_taken_0x290fc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x290fc4) {
            ctx->pc = 0x290FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290FC4u;
            // 0x290fc8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290FD8u;
            goto label_290fd8;
        }
    }
    ctx->pc = 0x290FCCu;
    // 0x290fcc: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x290fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x290fd0: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x290FD0u;
    {
        const bool branch_taken_0x290fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FD0u;
        // 0x290fd4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fd0) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x290FD8u;
label_290fd8:
    // 0x290fd8: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x290fd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290fdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290FDCu;
    {
        const bool branch_taken_0x290fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FDCu;
        // 0x290fe0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fdc) {
            ctx->pc = 0x290FF4u;
            goto label_290ff4;
        }
    }
    ctx->pc = 0x290FE4u;
    // 0x290fe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290fe8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290fe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290fec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x290FECu;
    {
        const bool branch_taken_0x290fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FECu;
        // 0x290ff0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fec) {
            ctx->pc = 0x290FF8u;
            goto label_290ff8;
        }
    }
    ctx->pc = 0x290FF4u;
label_290ff4:
    // 0x290ff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290ff8:
    // 0x290ff8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x290ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x290ffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291000: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x291000u;
    SET_GPR_U32(ctx, 31, 0x291008u);
    ctx->pc = 0x291004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291000u;
    // 0x291004: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x291000u, 0x291008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291008u;
label_291008:
    // 0x291008: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291008u;
    {
        const bool branch_taken_0x291008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291008u;
        // 0x29100c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291008) {
            ctx->pc = 0x29101Cu;
            goto label_29101c;
        }
    }
    ctx->pc = 0x291010u;
    // 0x291010: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x291010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x291014: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x291014u;
    {
        const bool branch_taken_0x291014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291014u;
        // 0x291018: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291014) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x29101Cu;
label_29101c:
    // 0x29101c: 0x27b10038  addiu       $s1, $sp, 0x38
    ctx->pc = 0x29101cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x291020: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x291020u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291024: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x291024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291028: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x291028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x29102c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291030: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x291030u;
    SET_GPR_U32(ctx, 31, 0x291038u);
    ctx->pc = 0x291034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291030u;
    // 0x291034: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x291030u, 0x291038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291038u;
label_291038:
    // 0x291038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291038u;
    {
        const bool branch_taken_0x291038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291038u;
        // 0x29103c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291038) {
            ctx->pc = 0x29104Cu;
            goto label_29104c;
        }
    }
    ctx->pc = 0x291040u;
    // 0x291040: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x291040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x291044: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x291044u;
    {
        const bool branch_taken_0x291044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291044u;
        // 0x291048: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291044) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x29104Cu;
label_29104c:
    // 0x29104c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291050: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x291050u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291054: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x291054u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x291058: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x291058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x29105c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x291060: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x291060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x291064: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x291064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291068: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x291068u;
    {
        const bool branch_taken_0x291068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x291068) {
            ctx->pc = 0x29106Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291068u;
            // 0x29106c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291078u;
            goto label_291078;
        }
    }
    ctx->pc = 0x291070u;
    // 0x291070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291070u;
    {
        const bool branch_taken_0x291070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291070u;
        // 0x291074: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291070) {
            ctx->pc = 0x291080u;
            goto label_291080;
        }
    }
    ctx->pc = 0x291078u;
label_291078:
    // 0x291078: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x291078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29107c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x29107cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_291080:
    // 0x291080: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x291080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291084: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x291084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291088: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x291088u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29108c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29108cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291090: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x291090u;
    SET_GPR_U32(ctx, 31, 0x291098u);
    ctx->pc = 0x291094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291090u;
    // 0x291094: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x291090u, 0x291098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291098u;
label_291098:
    // 0x291098: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291098u;
    {
        const bool branch_taken_0x291098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291098u;
        // 0x29109c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291098) {
            ctx->pc = 0x2910ACu;
            goto label_2910ac;
        }
    }
    ctx->pc = 0x2910A0u;
    // 0x2910a0: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2910a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2910a4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2910A4u;
    {
        const bool branch_taken_0x2910a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910A4u;
        // 0x2910a8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910a4) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x2910ACu;
label_2910ac:
    // 0x2910ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2910acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2910b0: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2910b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2910b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2910b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2910b8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2910bc: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2910bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2910c0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2910c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x2910c4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2910c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2910c8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2910c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2910cc: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2910CCu;
    SET_GPR_U32(ctx, 31, 0x2910D4u);
    ctx->pc = 0x2910D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2910CCu;
    // 0x2910d0: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x2910CCu, 0x2910D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2910D4u;
label_2910d4:
    // 0x2910d4: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2910D4u;
    {
        const bool branch_taken_0x2910d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910D4u;
        // 0x2910d8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910d4) {
            ctx->pc = 0x291288u;
            goto label_291288;
        }
    }
    ctx->pc = 0x2910DCu;
    // 0x2910dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2910dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2910e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2910e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910e4: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2910e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2910e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2910e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910ec: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x2910ECu;
    SET_GPR_U32(ctx, 31, 0x2910F4u);
    ctx->pc = 0x2910F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2910ECu;
    // 0x2910f0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x2910ECu, 0x2910F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2910F4u;
label_2910f4:
    // 0x2910f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2910F4u;
    {
        const bool branch_taken_0x2910f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2910F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910F4u;
        // 0x2910f8: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910f4) {
            ctx->pc = 0x291108u;
            goto label_291108;
        }
    }
    ctx->pc = 0x2910FCu;
    // 0x2910fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2910fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x291100: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x291100u;
    {
        const bool branch_taken_0x291100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291100u;
        // 0x291104: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291100) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x291108u;
label_291108:
    // 0x291108: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x291108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29110c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x29110cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291110: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x291110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x291114: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x291114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x291118: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x291118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x29111c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x29111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x291120: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x291120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x291124: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x291124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x291128: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x291128u;
    SET_GPR_U32(ctx, 31, 0x291130u);
    ctx->pc = 0x29112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291128u;
    // 0x29112c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x291128u, 0x291130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291130u;
label_291130:
    // 0x291130: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x291130u;
    {
        const bool branch_taken_0x291130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291130u;
        // 0x291134: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291130) {
            ctx->pc = 0x291288u;
            goto label_291288;
        }
    }
    ctx->pc = 0x291138u;
    // 0x291138: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x291138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29113c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29113cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291140: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x291140u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291144: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x291144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291148: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x291148u;
    SET_GPR_U32(ctx, 31, 0x291150u);
    ctx->pc = 0x29114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291148u;
    // 0x29114c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x291148u, 0x291150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291150u;
label_291150:
    // 0x291150: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291150u;
    {
        const bool branch_taken_0x291150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291150u;
        // 0x291154: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291150) {
            ctx->pc = 0x291164u;
            goto label_291164;
        }
    }
    ctx->pc = 0x291158u;
    // 0x291158: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x291158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x29115c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x29115Cu;
    {
        const bool branch_taken_0x29115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29115Cu;
        // 0x291160: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29115c) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x291164u;
label_291164:
    // 0x291164: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x291164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291168: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x291168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29116c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x29116cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x291170: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x291170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x291174: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x291174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x291178: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x291178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x29117c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x29117cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x291180: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x291180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x291184: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x291184u;
    SET_GPR_U32(ctx, 31, 0x29118Cu);
    ctx->pc = 0x291188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291184u;
    // 0x291188: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x291184u, 0x29118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29118Cu;
label_29118c:
    // 0x29118c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x29118Cu;
    {
        const bool branch_taken_0x29118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29118Cu;
        // 0x291190: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29118c) {
            ctx->pc = 0x291288u;
            goto label_291288;
        }
    }
    ctx->pc = 0x291194u;
    // 0x291194: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x291194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29119c: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x29119cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2911a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2911a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911a4: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x2911A4u;
    SET_GPR_U32(ctx, 31, 0x2911ACu);
    ctx->pc = 0x2911A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2911A4u;
    // 0x2911a8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x2911A4u, 0x2911ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911ACu;
label_2911ac:
    // 0x2911ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2911ACu;
    {
        const bool branch_taken_0x2911ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2911B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911ACu;
        // 0x2911b0: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911ac) {
            ctx->pc = 0x2911C0u;
            goto label_2911c0;
        }
    }
    ctx->pc = 0x2911B4u;
    // 0x2911b4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2911b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2911b8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2911B8u;
    {
        const bool branch_taken_0x2911b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2911BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911B8u;
        // 0x2911bc: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911b8) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x2911C0u;
label_2911c0:
    // 0x2911c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2911c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2911c4: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2911c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2911c8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2911c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2911cc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2911ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2911d0: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2911d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2911d4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2911d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x2911d8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2911d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2911dc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2911dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2911e0: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2911E0u;
    SET_GPR_U32(ctx, 31, 0x2911E8u);
    ctx->pc = 0x2911E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2911E0u;
    // 0x2911e4: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x2911E0u, 0x2911E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911E8u;
label_2911e8:
    // 0x2911e8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2911E8u;
    {
        const bool branch_taken_0x2911e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2911ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911E8u;
        // 0x2911ec: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911e8) {
            ctx->pc = 0x291288u;
            goto label_291288;
        }
    }
    ctx->pc = 0x2911F0u;
    // 0x2911f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2911f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2911f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2911f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911f8: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2911f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2911fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2911fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291200: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x291200u;
    SET_GPR_U32(ctx, 31, 0x291208u);
    ctx->pc = 0x291204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291200u;
    // 0x291204: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x291200u, 0x291208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291208u;
label_291208:
    // 0x291208: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291208u;
    {
        const bool branch_taken_0x291208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291208u;
        // 0x29120c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291208) {
            ctx->pc = 0x29121Cu;
            goto label_29121c;
        }
    }
    ctx->pc = 0x291210u;
    // 0x291210: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x291210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x291214: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x291214u;
    {
        const bool branch_taken_0x291214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291214u;
        // 0x291218: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291214) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x29121Cu;
label_29121c:
    // 0x29121c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291220: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x291220u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291224: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x291224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x291228: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x291228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29122c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x29122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x291230: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x291230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x291234: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x291234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x291238: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x291238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x29123c: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x29123Cu;
    SET_GPR_U32(ctx, 31, 0x291244u);
    ctx->pc = 0x291240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29123Cu;
    // 0x291240: 0x8e06001c  lw          $a2, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x29123Cu, 0x291244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291244u;
label_291244:
    // 0x291244: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x291244u;
    {
        const bool branch_taken_0x291244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291244u;
        // 0x291248: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291244) {
            ctx->pc = 0x291288u;
            goto label_291288;
        }
    }
    ctx->pc = 0x29124Cu;
    // 0x29124c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x29124Cu;
    SET_GPR_U32(ctx, 31, 0x291254u);
    ctx->pc = 0x291250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29124Cu;
    // 0x291250: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x29124Cu, 0x291254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291254u;
label_291254:
    // 0x291254: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x291254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x291258: 0xc0a065c  jal         func_281970
    ctx->pc = 0x291258u;
    SET_GPR_U32(ctx, 31, 0x291260u);
    ctx->pc = 0x29125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291258u;
    // 0x29125c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x291258u, 0x291260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291260u;
label_291260:
    // 0x291260: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291260u;
    {
        const bool branch_taken_0x291260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291260u;
        // 0x291264: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291260) {
            ctx->pc = 0x291274u;
            goto label_291274;
        }
    }
    ctx->pc = 0x291268u;
    // 0x291268: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x291268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x29126c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29126Cu;
    {
        const bool branch_taken_0x29126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29126Cu;
        // 0x291270: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29126c) {
            ctx->pc = 0x29128Cu;
            goto label_29128c;
        }
    }
    ctx->pc = 0x291274u;
label_291274:
    // 0x291274: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x291274u;
    {
        const bool branch_taken_0x291274 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x291278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291274u;
        // 0x291278: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291274) {
            ctx->pc = 0x291280u;
            goto label_291280;
        }
    }
    ctx->pc = 0x29127Cu;
    // 0x29127c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x29127cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_291280:
    // 0x291280: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x291280u;
    {
        const bool branch_taken_0x291280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291280u;
        // 0x291284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291280) {
            ctx->pc = 0x2912E0u;
            goto label_2912e0;
        }
    }
    ctx->pc = 0x291288u;
label_291288:
    // 0x291288: 0x24150803  addiu       $s5, $zero, 0x803
    ctx->pc = 0x291288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_29128c:
    // 0x29128c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29128cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291290: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x291290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x291294: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x291294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x291298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29129c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29129Cu;
    SET_GPR_U32(ctx, 31, 0x2912A4u);
    ctx->pc = 0x2912A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29129Cu;
    // 0x2912a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29129Cu, 0x2912A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912A4u;
label_2912a4:
    // 0x2912a4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2912A4u;
    {
        const bool branch_taken_0x2912a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912A4u;
        // 0x2912a8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912a4) {
            ctx->pc = 0x2912CCu;
            goto label_2912cc;
        }
    }
    ctx->pc = 0x2912ACu;
    // 0x2912ac: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2912ACu;
    {
        const bool branch_taken_0x2912ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2912ac) {
            ctx->pc = 0x2912C0u;
            goto label_2912c0;
        }
    }
    ctx->pc = 0x2912B4u;
    // 0x2912b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2912b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2912b8: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2912B8u;
    {
        const bool branch_taken_0x2912b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2912b8) {
            ctx->pc = 0x2912CCu;
            goto label_2912cc;
        }
    }
    ctx->pc = 0x2912C0u;
label_2912c0:
    // 0x2912c0: 0xc0a5200  jal         func_294800
    ctx->pc = 0x2912C0u;
    SET_GPR_U32(ctx, 31, 0x2912C8u);
    ctx->pc = 0x2912C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2912C0u;
    // 0x2912c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294800u, 0x2912C0u, 0x2912C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912C8u;
label_2912c8:
    // 0x2912c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2912c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2912cc:
    // 0x2912cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2912CCu;
    {
        const bool branch_taken_0x2912cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2912D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912CCu;
        // 0x2912d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2912cc) {
            ctx->pc = 0x2912E0u;
            goto label_2912e0;
        }
    }
    ctx->pc = 0x2912D4u;
    // 0x2912d4: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2912D4u;
    SET_GPR_U32(ctx, 31, 0x2912DCu);
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x2912D4u, 0x2912DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2912DCu;
label_2912dc:
    // 0x2912dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2912dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2912e0:
    // 0x2912e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2912e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2912e4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2912e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2912e8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2912e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2912ec: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2912ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2912f0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2912f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2912f4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2912f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2912f8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2912f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2912fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2912FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2912FCu;
        // 0x291300: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2912FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291304u;
    // 0x291304: 0x0  nop
    ctx->pc = 0x291304u;
    // NOP
    if (ctx->pc == 0x291304u) { ctx->pc = 0x291308u; }
}
