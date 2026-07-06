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

// Function: sub_003013A0
// Address: 0x3013a0 - 0x3015b0
void sub_003013A0_0x3013a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003013A0_0x3013a0");
#endif

    switch (ctx->pc) {
        case 0x3013f4u: goto label_3013f4;
        case 0x30141cu: goto label_30141c;
        case 0x30142cu: goto label_30142c;
        case 0x30144cu: goto label_30144c;
        case 0x301460u: goto label_301460;
        case 0x30146cu: goto label_30146c;
        case 0x3014a4u: goto label_3014a4;
        case 0x3014acu: goto label_3014ac;
        case 0x3014ccu: goto label_3014cc;
        case 0x3014d8u: goto label_3014d8;
        case 0x3014f4u: goto label_3014f4;
        case 0x301518u: goto label_301518;
        case 0x301570u: goto label_301570;
        default: break;
    }

    ctx->pc = 0x3013a0u;

    // 0x3013a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3013a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3013a4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3013a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3013a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3013a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3013ac: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3013acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x3013b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3013b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3013b4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x3013b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3013b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3013b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3013bc: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x3013bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x3013c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3013c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3013c4: 0x244206c2  addiu       $v0, $v0, 0x6C2
    ctx->pc = 0x3013c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1730));
    // 0x3013c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3013c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3013cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3013ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3013d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3013d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3013d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3013d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3013d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3013d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3013dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3013dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3013e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3013e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3013e4: 0x84720000  lh          $s2, 0x0($v1)
    ctx->pc = 0x3013e4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3013e8: 0x84540000  lh          $s4, 0x0($v0)
    ctx->pc = 0x3013e8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3013ec: 0xc0c0444  jal         func_301110
    ctx->pc = 0x3013ECu;
    SET_GPR_U32(ctx, 31, 0x3013F4u);
    ctx->pc = 0x3013F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3013ECu;
    // 0x3013f0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x301110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301110u, 0x3013ECu, 0x3013F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013F4u;
label_3013f4:
    // 0x3013f4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3013f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3013f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3013f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3013fc: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x3013fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301400: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x301400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x301404: 0xac600c30  sw          $zero, 0xC30($v1)
    ctx->pc = 0x301404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3120), GPR_U32(ctx, 0));
    // 0x301408: 0x8c42b7d8  lw          $v0, -0x4828($v0)
    ctx->pc = 0x301408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x30140c: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x30140cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x301410: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x301410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x301414: 0xc083044  jal         func_20C110
    ctx->pc = 0x301414u;
    SET_GPR_U32(ctx, 31, 0x30141Cu);
    ctx->pc = 0x301418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301414u;
    // 0x301418: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C110u, 0x301414u, 0x30141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30141Cu;
label_30141c:
    // 0x30141c: 0x96300004  lhu         $s0, 0x4($s1)
    ctx->pc = 0x30141cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x301420: 0x96330006  lhu         $s3, 0x6($s1)
    ctx->pc = 0x301420u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x301424: 0xc08303c  jal         func_20C0F0
    ctx->pc = 0x301424u;
    SET_GPR_U32(ctx, 31, 0x30142Cu);
    ctx->pc = 0x301428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301424u;
    // 0x301428: 0x96350002  lhu         $s5, 0x2($s1) (Delay Slot)
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C0F0u, 0x301424u, 0x30142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30142Cu;
label_30142c:
    // 0x30142c: 0x32b1ffff  andi        $s1, $s5, 0xFFFF
    ctx->pc = 0x30142cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x301430: 0x1a200049  blez        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x301430u;
    {
        const bool branch_taken_0x301430 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x301434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301430u;
        // 0x301434: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301430) {
            ctx->pc = 0x301558u;
            goto label_301558;
        }
    }
    ctx->pc = 0x301438u;
    // 0x301438: 0x14b43c  dsll32      $s6, $s4, 16
    ctx->pc = 0x301438u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) << (32 + 16));
    // 0x30143c: 0x12bc3c  dsll32      $s7, $s2, 16
    ctx->pc = 0x30143cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) << (32 + 16));
    // 0x301440: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x301440u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x301444: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x301444u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x301448: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x301448u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_30144c:
    // 0x30144c: 0x1a00003c  blez        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x30144Cu;
    {
        const bool branch_taken_0x30144c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x301450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30144Cu;
        // 0x301450: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30144c) {
            ctx->pc = 0x301540u;
            goto label_301540;
        }
    }
    ctx->pc = 0x301454u;
    // 0x301454: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x301454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x301458: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x301458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30145c: 0x2e29021  addu        $s2, $s7, $v0
    ctx->pc = 0x30145cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_301460:
    // 0x301460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x301460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301464: 0xc040454  jal         func_101150
    ctx->pc = 0x301464u;
    SET_GPR_U32(ctx, 31, 0x30146Cu);
    ctx->pc = 0x301468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301464u;
    // 0x301468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x301464u, 0x30146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30146Cu;
label_30146c:
    // 0x30146c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x30146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x301470: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x301470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x301474: 0x8c420c30  lw          $v0, 0xC30($v0)
    ctx->pc = 0x301474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3120)));
    // 0x301478: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x301478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30147c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30147cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301480: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x301480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x301484: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301488: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30148c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x30148cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x301490: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x301490u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301494: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x301494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x301498: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x301498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30149c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x30149Cu;
    SET_GPR_U32(ctx, 31, 0x3014A4u);
    ctx->pc = 0x3014A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30149Cu;
    // 0x3014a0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x30149Cu, 0x3014A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014A4u;
label_3014a4:
    // 0x3014a4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3014A4u;
    SET_GPR_U32(ctx, 31, 0x3014ACu);
    ctx->pc = 0x3014A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014A4u;
    // 0x3014a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3014A4u, 0x3014ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014ACu;
label_3014ac:
    // 0x3014ac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3014acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3014b0: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x3014b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3014b4: 0x8c42b7d8  lw          $v0, -0x4828($v0)
    ctx->pc = 0x3014b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x3014b8: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x3014b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x3014bc: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x3014bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x3014c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3014c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3014c4: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3014C4u;
    SET_GPR_U32(ctx, 31, 0x3014CCu);
    ctx->pc = 0x3014C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014C4u;
    // 0x3014c8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3014C4u, 0x3014CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014CCu;
label_3014cc:
    // 0x3014cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3014ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3014d0: 0xc040454  jal         func_101150
    ctx->pc = 0x3014D0u;
    SET_GPR_U32(ctx, 31, 0x3014D8u);
    ctx->pc = 0x3014D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014D0u;
    // 0x3014d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3014D0u, 0x3014D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014D8u;
label_3014d8:
    // 0x3014d8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3014d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3014dc: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x3014dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3014e0: 0x8c460c30  lw          $a2, 0xC30($v0)
    ctx->pc = 0x3014e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3120)));
    // 0x3014e4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3014e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3014e8: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x3014e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x3014ec: 0xc0c044c  jal         func_301130
    ctx->pc = 0x3014ECu;
    SET_GPR_U32(ctx, 31, 0x3014F4u);
    ctx->pc = 0x3014F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014ECu;
    // 0x3014f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301130u, 0x3014ECu, 0x3014F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014F4u;
label_3014f4:
    // 0x3014f4: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x3014f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x3014f8: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x3014f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x3014fc: 0x8c850c30  lw          $a1, 0xC30($a0)
    ctx->pc = 0x3014fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3120)));
    // 0x301500: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x301500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x301504: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x301504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x301508: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301508u;
    {
        const bool branch_taken_0x301508 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x30150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301508u;
        // 0x30150c: 0xac650c30  sw          $a1, 0xC30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301508) {
            ctx->pc = 0x301520u;
            goto label_301520;
        }
    }
    ctx->pc = 0x301510u;
    // 0x301510: 0xc0c04bc  jal         func_3012F0
    ctx->pc = 0x301510u;
    SET_GPR_U32(ctx, 31, 0x301518u);
    ctx->pc = 0x3012F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3012F0u, 0x301510u, 0x301518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301518u;
label_301518:
    // 0x301518: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x30151c: 0xac600c30  sw          $zero, 0xC30($v1)
    ctx->pc = 0x30151cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3120), GPR_U32(ctx, 0));
label_301520:
    // 0x301520: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x301520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x301524: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x301524u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x301528: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x301528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30152c: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x30152cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x301530: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x301530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x301534: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x301534u;
    {
        const bool branch_taken_0x301534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x301534) {
            ctx->pc = 0x301460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_301460;
        }
    }
    ctx->pc = 0x30153Cu;
    // 0x30153c: 0x0  nop
    ctx->pc = 0x30153cu;
    // NOP
label_301540:
    // 0x301540: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x301540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x301544: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x301544u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x301548: 0x2b1182a  slt         $v1, $s5, $s1
    ctx->pc = 0x301548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x30154c: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x30154Cu;
    {
        const bool branch_taken_0x30154c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30154c) {
            ctx->pc = 0x30144Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30144c;
        }
    }
    ctx->pc = 0x301554u;
    // 0x301554: 0x0  nop
    ctx->pc = 0x301554u;
    // NOP
label_301558:
    // 0x301558: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x30155c: 0x8c630c30  lw          $v1, 0xC30($v1)
    ctx->pc = 0x30155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3120)));
    // 0x301560: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x301560u;
    {
        const bool branch_taken_0x301560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301560) {
            ctx->pc = 0x301564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301560u;
            // 0x301564: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30157Cu;
            goto label_30157c;
        }
    }
    ctx->pc = 0x301568u;
    // 0x301568: 0xc0c04bc  jal         func_3012F0
    ctx->pc = 0x301568u;
    SET_GPR_U32(ctx, 31, 0x301570u);
    ctx->pc = 0x3012F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3012F0u, 0x301568u, 0x301570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301570u;
label_301570:
    // 0x301570: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x301574: 0xac600c30  sw          $zero, 0xC30($v1)
    ctx->pc = 0x301574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3120), GPR_U32(ctx, 0));
    // 0x301578: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x301578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_30157c:
    // 0x30157c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30157cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x301580: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x301580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301584: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x301584u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x301588: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x301588u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30158c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30158cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x301590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30159c: 0x3e00008  jr          $ra
    ctx->pc = 0x30159Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3015A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30159Cu;
        // 0x3015a0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30159Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3015A4u;
    // 0x3015a4: 0x0  nop
    ctx->pc = 0x3015a4u;
    // NOP
    // 0x3015a8: 0x0  nop
    ctx->pc = 0x3015a8u;
    // NOP
    // 0x3015ac: 0x0  nop
    ctx->pc = 0x3015acu;
    // NOP
    if (ctx->pc == 0x3015acu) { ctx->pc = 0x3015b0u; }
}
