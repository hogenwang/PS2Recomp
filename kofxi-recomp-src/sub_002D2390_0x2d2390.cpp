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

// Function: sub_002D2390
// Address: 0x2d2390 - 0x2d2568
void sub_002D2390_0x2d2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2390_0x2d2390");
#endif

    switch (ctx->pc) {
        case 0x2d23f4u: goto label_2d23f4;
        case 0x2d2418u: goto label_2d2418;
        case 0x2d2438u: goto label_2d2438;
        case 0x2d2460u: goto label_2d2460;
        case 0x2d246cu: goto label_2d246c;
        case 0x2d248cu: goto label_2d248c;
        case 0x2d24b0u: goto label_2d24b0;
        case 0x2d24bcu: goto label_2d24bc;
        case 0x2d24dcu: goto label_2d24dc;
        case 0x2d2500u: goto label_2d2500;
        case 0x2d250cu: goto label_2d250c;
        case 0x2d2518u: goto label_2d2518;
        case 0x2d2528u: goto label_2d2528;
        default: break;
    }

    ctx->pc = 0x2d2390u;

    // 0x2d2390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d2394: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d2394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d2398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d239c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d23a0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d23a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d23a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d23a8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d23a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23ac: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d23acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d23b0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2d23b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23b4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d23b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d23b8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2d23b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d23bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d23c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d23c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d23c4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d23c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d23c8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d23c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d23cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d23ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d23d0: 0x8eb30004  lw          $s3, 0x4($s5)
    ctx->pc = 0x2d23d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d23d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d23d8: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x2d23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2d23dc: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x2d23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d23e0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2d23e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d23e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D23E4u;
    {
        const bool branch_taken_0x2d23e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23E4u;
        // 0x2d23e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d23e4) {
            ctx->pc = 0x2D23FCu;
            goto label_2d23fc;
        }
    }
    ctx->pc = 0x2D23ECu;
    // 0x2d23ec: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D23ECu;
    SET_GPR_U32(ctx, 31, 0x2D23F4u);
    ctx->pc = 0x2D23F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D23ECu;
    // 0x2d23f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D23ECu, 0x2D23F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23F4u;
label_2d23f4:
    // 0x2d23f4: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D23F4u;
    {
        const bool branch_taken_0x2d23f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d23f4) {
            ctx->pc = 0x2D23F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D23F4u;
            // 0x2d23f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2538u;
            goto label_2d2538;
        }
    }
    ctx->pc = 0x2D23FCu;
label_2d23fc:
    // 0x2d23fc: 0x8e560008  lw          $s6, 0x8($s2)
    ctx->pc = 0x2d23fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d2400: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x2d2400u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2d2404: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2d2404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x2d2408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d240c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2410: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D2410u;
    SET_GPR_U32(ctx, 31, 0x2D2418u);
    ctx->pc = 0x2D2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2410u;
    // 0x2d2414: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D2410u, 0x2D2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2418u;
label_2d2418:
    // 0x2d2418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d241c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2d241cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2d2420: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x2d2420u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d2424: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2d2424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d2428: 0x1a80001b  blez        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D2428u;
    {
        const bool branch_taken_0x2d2428 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2D242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2428u;
        // 0x2d242c: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2428) {
            ctx->pc = 0x2D2498u;
            goto label_2d2498;
        }
    }
    ctx->pc = 0x2D2430u;
    // 0x2d2430: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d2430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d2434: 0x0  nop
    ctx->pc = 0x2d2434u;
    // NOP
label_2d2438:
    // 0x2d2438: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x2d2438u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d243c: 0x8ee70004  lw          $a3, 0x4($s7)
    ctx->pc = 0x2d243cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2d2440: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d2440u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2444: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2d2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d2448: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x2d2448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2d244c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2d244cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2454: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d2454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2458: 0xc0b5264  jal         func_2D4990
    ctx->pc = 0x2D2458u;
    SET_GPR_U32(ctx, 31, 0x2D2460u);
    ctx->pc = 0x2D245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2458u;
    // 0x2d245c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4990u, 0x2D2458u, 0x2D2460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2460u;
label_2d2460:
    // 0x2d2460: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x2d2460u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2464: 0xc048082  jal         func_120208
    ctx->pc = 0x2D2464u;
    SET_GPR_U32(ctx, 31, 0x2D246Cu);
    ctx->pc = 0x2D2468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2464u;
    // 0x2d2468: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2D2464u, 0x2D246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D246Cu;
label_2d246c:
    // 0x2d246c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d246cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2474: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d2474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d247c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d247cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d2480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d2484: 0xc0b5264  jal         func_2D4990
    ctx->pc = 0x2D2484u;
    SET_GPR_U32(ctx, 31, 0x2D248Cu);
    ctx->pc = 0x2D2488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2484u;
    // 0x2d2488: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4990u, 0x2D2484u, 0x2D248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D248Cu;
label_2d248c:
    // 0x2d248c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2d248cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2d2490: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D2490u;
    {
        const bool branch_taken_0x2d2490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2490u;
        // 0x2d2494: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2490) {
            ctx->pc = 0x2D2438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2438;
        }
    }
    ctx->pc = 0x2D2498u;
label_2d2498:
    // 0x2d2498: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2d2498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d249c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D249Cu;
    {
        const bool branch_taken_0x2d249c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D249Cu;
        // 0x2d24a0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d249c) {
            ctx->pc = 0x2D24ECu;
            goto label_2d24ec;
        }
    }
    ctx->pc = 0x2D24A4u;
    // 0x2d24a4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2d24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d24a8: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x2d24a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2d24ac: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x2d24acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_2d24b0:
    // 0x2d24b0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2d24b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2d24b4: 0xc048082  jal         func_120208
    ctx->pc = 0x2D24B4u;
    SET_GPR_U32(ctx, 31, 0x2D24BCu);
    ctx->pc = 0x2D24B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24B4u;
    // 0x2d24b8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2D24B4u, 0x2D24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24BCu;
label_2d24bc:
    // 0x2d24bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d24bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d24c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24c4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d24c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d24c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d24ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d24d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d24d4: 0xc0b5264  jal         func_2D4990
    ctx->pc = 0x2D24D4u;
    SET_GPR_U32(ctx, 31, 0x2D24DCu);
    ctx->pc = 0x2D24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24D4u;
    // 0x2d24d8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4990u, 0x2D24D4u, 0x2D24DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24DCu;
label_2d24dc:
    // 0x2d24dc: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2d24dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d24e0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D24E0u;
    {
        const bool branch_taken_0x2d24e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d24e0) {
            ctx->pc = 0x2D24E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D24E0u;
            // 0x2d24e4: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D24B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d24b0;
        }
    }
    ctx->pc = 0x2D24E8u;
    // 0x2d24e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d24ec:
    // 0x2d24ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d24ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d24f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d24f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2d24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d24f8: 0xc0b517a  jal         func_2D45E8
    ctx->pc = 0x2D24F8u;
    SET_GPR_U32(ctx, 31, 0x2D2500u);
    ctx->pc = 0x2D24FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D24F8u;
    // 0x2d24fc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D45E8u, 0x2D24F8u, 0x2D2500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2500u;
label_2d2500:
    // 0x2d2500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2504: 0xc0b51ce  jal         func_2D4738
    ctx->pc = 0x2D2504u;
    SET_GPR_U32(ctx, 31, 0x2D250Cu);
    ctx->pc = 0x2D2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2504u;
    // 0x2d2508: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4738u, 0x2D2504u, 0x2D250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D250Cu;
label_2d250c:
    // 0x2d250c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2510: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2510u;
    SET_GPR_U32(ctx, 31, 0x2D2518u);
    ctx->pc = 0x2D2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2510u;
    // 0x2d2514: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D2510u, 0x2D2518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2518u;
label_2d2518:
    // 0x2d2518: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2518u;
    {
        const bool branch_taken_0x2d2518 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2518u;
        // 0x2d251c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2518) {
            ctx->pc = 0x2D2530u;
            goto label_2d2530;
        }
    }
    ctx->pc = 0x2D2520u;
    // 0x2d2520: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2520u;
    SET_GPR_U32(ctx, 31, 0x2D2528u);
    ctx->pc = 0x2D2524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2520u;
    // 0x2d2524: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4058u, 0x2D2520u, 0x2D2528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2528u;
label_2d2528:
    // 0x2d2528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2528u;
    {
        const bool branch_taken_0x2d2528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2528u;
        // 0x2d252c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2528) {
            ctx->pc = 0x2D2538u;
            goto label_2d2538;
        }
    }
    ctx->pc = 0x2D2530u;
label_2d2530:
    // 0x2d2530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2534: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d2534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d2538:
    // 0x2d2538: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d2538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d253c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d253cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2540: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d2540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d2544: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d2544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2548: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d2548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d254c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d254cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2550: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d2550u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2554: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d2554u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2558: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d2558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d255c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D255Cu;
        // 0x2d2560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2564u;
    // 0x2d2564: 0x0  nop
    ctx->pc = 0x2d2564u;
    // NOP
    if (ctx->pc == 0x2d2564u) { ctx->pc = 0x2d2568u; }
}
