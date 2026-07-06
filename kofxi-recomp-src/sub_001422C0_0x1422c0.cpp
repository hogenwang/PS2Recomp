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

// Function: sub_001422C0
// Address: 0x1422c0 - 0x142520
void sub_001422C0_0x1422c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001422C0_0x1422c0");
#endif

    switch (ctx->pc) {
        case 0x142314u: goto label_142314;
        case 0x14233cu: goto label_14233c;
        case 0x142364u: goto label_142364;
        case 0x142374u: goto label_142374;
        case 0x14239cu: goto label_14239c;
        case 0x1423c4u: goto label_1423c4;
        case 0x142440u: goto label_142440;
        case 0x142478u: goto label_142478;
        case 0x142494u: goto label_142494;
        case 0x1424b0u: goto label_1424b0;
        case 0x1424ccu: goto label_1424cc;
        case 0x1424e8u: goto label_1424e8;
        case 0x1424f4u: goto label_1424f4;
        default: break;
    }

    ctx->pc = 0x1422c0u;

    // 0x1422c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1422c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1422c4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1422c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1422c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1422c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1422cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1422ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1422d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1422d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1422d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1422d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1422d8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1422d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1422dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1422e0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1422e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1422e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1422e8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1422e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1422ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1422f0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1422f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1422f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1422f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1422f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422fc: 0x8d2400dc  lw          $a0, 0xDC($t1)
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 220)));
    // 0x142300: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x142300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x142304: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x142304u;
    {
        const bool branch_taken_0x142304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142304u;
        // 0x142308: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142304) {
            ctx->pc = 0x14236Cu;
            goto label_14236c;
        }
    }
    ctx->pc = 0x14230Cu;
    // 0x14230c: 0xc058d7c  jal         func_1635F0
    ctx->pc = 0x14230Cu;
    SET_GPR_U32(ctx, 31, 0x142314u);
    ctx->pc = 0x142310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14230Cu;
    // 0x142310: 0x924505f1  lbu         $a1, 0x5F1($s2) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1521)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1635F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635F0u, 0x14230Cu, 0x142314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142314u;
label_142314:
    // 0x142314: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x142314u;
    {
        const bool branch_taken_0x142314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x142314) {
            ctx->pc = 0x142344u;
            goto label_142344;
        }
    }
    ctx->pc = 0x14231Cu;
    // 0x14231c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x14231cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x142320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142324: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x142324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x142328: 0x24c61cf0  addiu       $a2, $a2, 0x1CF0
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7408));
    // 0x14232c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14232cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142330: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x142330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142334: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x142334u;
    SET_GPR_U32(ctx, 31, 0x14233Cu);
    ctx->pc = 0x142338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142334u;
    // 0x142338: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AA0u, 0x142334u, 0x14233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14233Cu;
label_14233c:
    // 0x14233c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14233Cu;
    {
        const bool branch_taken_0x14233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14233c) {
            ctx->pc = 0x1423C4u;
            goto label_1423c4;
        }
    }
    ctx->pc = 0x142344u;
label_142344:
    // 0x142344: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x142344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x142348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14234c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x142350: 0x24c61cf0  addiu       $a2, $a2, 0x1CF0
    ctx->pc = 0x142350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7408));
    // 0x142354: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x142354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142358: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x142358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14235c: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x14235Cu;
    SET_GPR_U32(ctx, 31, 0x142364u);
    ctx->pc = 0x142360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14235Cu;
    // 0x142360: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AA0u, 0x14235Cu, 0x142364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142364u;
label_142364:
    // 0x142364: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x142364u;
    {
        const bool branch_taken_0x142364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142364) {
            ctx->pc = 0x1423C4u;
            goto label_1423c4;
        }
    }
    ctx->pc = 0x14236Cu;
label_14236c:
    // 0x14236c: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x14236Cu;
    SET_GPR_U32(ctx, 31, 0x142374u);
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x14236Cu, 0x142374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142374u;
label_142374:
    // 0x142374: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x142374u;
    {
        const bool branch_taken_0x142374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x142374) {
            ctx->pc = 0x1423A4u;
            goto label_1423a4;
        }
    }
    ctx->pc = 0x14237Cu;
    // 0x14237c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x14237cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x142380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142384: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x142384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x142388: 0x24c61cf0  addiu       $a2, $a2, 0x1CF0
    ctx->pc = 0x142388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7408));
    // 0x14238c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14238cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142390: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x142390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142394: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x142394u;
    SET_GPR_U32(ctx, 31, 0x14239Cu);
    ctx->pc = 0x142398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142394u;
    // 0x142398: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AA0u, 0x142394u, 0x14239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14239Cu;
label_14239c:
    // 0x14239c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14239Cu;
    {
        const bool branch_taken_0x14239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14239c) {
            ctx->pc = 0x1423C4u;
            goto label_1423c4;
        }
    }
    ctx->pc = 0x1423A4u;
label_1423a4:
    // 0x1423a4: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x1423a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x1423a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1423a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423ac: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1423acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1423b0: 0x24c61cf0  addiu       $a2, $a2, 0x1CF0
    ctx->pc = 0x1423b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7408));
    // 0x1423b4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1423b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423b8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1423b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423bc: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x1423BCu;
    SET_GPR_U32(ctx, 31, 0x1423C4u);
    ctx->pc = 0x1423C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1423BCu;
    // 0x1423c0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AA0u, 0x1423BCu, 0x1423C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1423C4u;
label_1423c4:
    // 0x1423c4: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x1423C4u;
    {
        const bool branch_taken_0x1423c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423c4) {
            ctx->pc = 0x1423C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1423C4u;
            // 0x1423c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1424F8u;
            goto label_1424f8;
        }
    }
    ctx->pc = 0x1423CCu;
    // 0x1423cc: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x1423ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1423d0: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x1423d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1423d4: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x1423d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1423d8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1423d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1423dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1423dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1423e0: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x1423e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x1423e4: 0xa63000f0  sh          $s0, 0xF0($s1)
    ctx->pc = 0x1423e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 16));
    // 0x1423e8: 0xae2403f0  sw          $a0, 0x3F0($s1)
    ctx->pc = 0x1423e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 4));
    // 0x1423ec: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1423ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1423f0: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1423F0u;
    {
        const bool branch_taken_0x1423f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423F0u;
        // 0x1423f4: 0xae2303f4  sw          $v1, 0x3F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423f0) {
            ctx->pc = 0x1424ECu;
            goto label_1424ec;
        }
    }
    ctx->pc = 0x1423F8u;
    // 0x1423f8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1423f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1423fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1423fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142400: 0x2463cd40  addiu       $v1, $v1, -0x32C0
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954304));
    // 0x142404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14240c: 0x400008  jr          $v0
    ctx->pc = 0x14240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142414u: goto label_142414;
            case 0x142448u: goto label_142448;
            case 0x142480u: goto label_142480;
            case 0x14249Cu: goto label_14249c;
            case 0x1424B8u: goto label_1424b8;
            case 0x1424D4u: goto label_1424d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14240Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x142414u;
label_142414:
    // 0x142414: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x142414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x142418: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x142418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x14241c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14241Cu;
    {
        const bool branch_taken_0x14241c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14241c) {
            ctx->pc = 0x142420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14241Cu;
            // 0x142420: 0x92420008  lbu         $v0, 0x8($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142430u;
            goto label_142430;
        }
    }
    ctx->pc = 0x142424u;
    // 0x142424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142428u;
    {
        const bool branch_taken_0x142428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142428u;
        // 0x14242c: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142428) {
            ctx->pc = 0x142434u;
            goto label_142434;
        }
    }
    ctx->pc = 0x142430u;
label_142430:
    // 0x142430: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x142430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_142434:
    // 0x142434: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x142434u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x142438: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x142438u;
    SET_GPR_U32(ctx, 31, 0x142440u);
    ctx->pc = 0x14243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142438u;
    // 0x14243c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9C0u, 0x142438u, 0x142440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142440u;
label_142440:
    // 0x142440: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x142440u;
    {
        const bool branch_taken_0x142440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142440u;
        // 0x142444: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142440) {
            ctx->pc = 0x1424ECu;
            goto label_1424ec;
        }
    }
    ctx->pc = 0x142448u;
label_142448:
    // 0x142448: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x142448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x14244c: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x14244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x142450: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x142450u;
    {
        const bool branch_taken_0x142450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142450) {
            ctx->pc = 0x142454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142450u;
            // 0x142454: 0x92420008  lbu         $v0, 0x8($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142464u;
            goto label_142464;
        }
    }
    ctx->pc = 0x142458u;
    // 0x142458: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x142458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x14245c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14245Cu;
    {
        const bool branch_taken_0x14245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14245Cu;
        // 0x142460: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14245c) {
            ctx->pc = 0x14246Cu;
            goto label_14246c;
        }
    }
    ctx->pc = 0x142464u;
label_142464:
    // 0x142464: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x142464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x142468: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x142468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_14246c:
    // 0x14246c: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x14246cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x142470: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x142470u;
    SET_GPR_U32(ctx, 31, 0x142478u);
    ctx->pc = 0x142474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142470u;
    // 0x142474: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9C0u, 0x142470u, 0x142478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142478u;
label_142478:
    // 0x142478: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142478u;
    {
        const bool branch_taken_0x142478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142478u;
        // 0x14247c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142478) {
            ctx->pc = 0x1424ECu;
            goto label_1424ec;
        }
    }
    ctx->pc = 0x142480u;
label_142480:
    // 0x142480: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142484: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x142484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142488: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x142488u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14248c: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x14248Cu;
    SET_GPR_U32(ctx, 31, 0x142494u);
    ctx->pc = 0x142490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14248Cu;
    // 0x142490: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9C0u, 0x14248Cu, 0x142494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142494u;
label_142494:
    // 0x142494: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x142494u;
    {
        const bool branch_taken_0x142494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142494u;
        // 0x142498: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142494) {
            ctx->pc = 0x1424ECu;
            goto label_1424ec;
        }
    }
    ctx->pc = 0x14249Cu;
label_14249c:
    // 0x14249c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1424a0: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x1424a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1424a4: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x1424a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1424a8: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x1424A8u;
    SET_GPR_U32(ctx, 31, 0x1424B0u);
    ctx->pc = 0x1424ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424A8u;
    // 0x1424ac: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9C0u, 0x1424A8u, 0x1424B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424B0u;
label_1424b0:
    // 0x1424b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1424B0u;
    {
        const bool branch_taken_0x1424b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1424B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424B0u;
        // 0x1424b4: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424b0) {
            ctx->pc = 0x1424ECu;
            goto label_1424ec;
        }
    }
    ctx->pc = 0x1424B8u;
label_1424b8:
    // 0x1424b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1424b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1424bc: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x1424bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1424c0: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x1424c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1424c4: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x1424C4u;
    SET_GPR_U32(ctx, 31, 0x1424CCu);
    ctx->pc = 0x1424C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424C4u;
    // 0x1424c8: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9C0u, 0x1424C4u, 0x1424CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424CCu;
label_1424cc:
    // 0x1424cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1424CCu;
    {
        const bool branch_taken_0x1424cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1424D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424CCu;
        // 0x1424d0: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424cc) {
            ctx->pc = 0x1424ECu;
            goto label_1424ec;
        }
    }
    ctx->pc = 0x1424D4u;
label_1424d4:
    // 0x1424d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1424d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1424d8: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x1424d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1424dc: 0x92250008  lbu         $a1, 0x8($s1)
    ctx->pc = 0x1424dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1424e0: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x1424E0u;
    SET_GPR_U32(ctx, 31, 0x1424E8u);
    ctx->pc = 0x1424E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424E0u;
    // 0x1424e4: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9C0u, 0x1424E0u, 0x1424E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424E8u;
label_1424e8:
    // 0x1424e8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1424e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1424ec:
    // 0x1424ec: 0xc05ad10  jal         func_16B440
    ctx->pc = 0x1424ECu;
    SET_GPR_U32(ctx, 31, 0x1424F4u);
    ctx->pc = 0x1424F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424ECu;
    // 0x1424f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B440u, 0x1424ECu, 0x1424F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424F4u;
label_1424f4:
    // 0x1424f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1424f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1424f8:
    // 0x1424f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1424f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1424fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1424fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142500: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x142500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14250c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14250cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142514: 0x3e00008  jr          $ra
    ctx->pc = 0x142514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142514u;
        // 0x142518: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14251Cu;
    // 0x14251c: 0x0  nop
    ctx->pc = 0x14251cu;
    // NOP
}
