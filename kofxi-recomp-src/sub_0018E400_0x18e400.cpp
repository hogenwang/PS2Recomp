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

// Function: sub_0018E400
// Address: 0x18e400 - 0x18e750
void sub_0018E400_0x18e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E400_0x18e400");
#endif

    switch (ctx->pc) {
        case 0x18e440u: goto label_18e440;
        case 0x18e44cu: goto label_18e44c;
        case 0x18e494u: goto label_18e494;
        case 0x18e4a8u: goto label_18e4a8;
        case 0x18e4bcu: goto label_18e4bc;
        case 0x18e4d8u: goto label_18e4d8;
        case 0x18e500u: goto label_18e500;
        case 0x18e568u: goto label_18e568;
        case 0x18e588u: goto label_18e588;
        case 0x18e5f4u: goto label_18e5f4;
        case 0x18e658u: goto label_18e658;
        case 0x18e698u: goto label_18e698;
        default: break;
    }

    ctx->pc = 0x18e400u;

    // 0x18e400: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x18e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x18e404: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18e408: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18e40c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18e410: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18e414: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18e418: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18e41c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18e41cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e420: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18e424: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e430: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18e430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e438: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x18E438u;
    SET_GPR_U32(ctx, 31, 0x18E440u);
    ctx->pc = 0x18E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E438u;
    // 0x18e43c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x18E438u, 0x18E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E440u;
label_18e440:
    // 0x18e440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e444: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x18E444u;
    SET_GPR_U32(ctx, 31, 0x18E44Cu);
    ctx->pc = 0x18E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E444u;
    // 0x18e448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x18E444u, 0x18E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E44Cu;
label_18e44c:
    // 0x18e44c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18e44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18e450: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x18e450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18e454: 0x30440f00  andi        $a0, $v0, 0xF00
    ctx->pc = 0x18e454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x18e458: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e45c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18E45Cu;
    {
        const bool branch_taken_0x18e45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E45Cu;
        // 0x18e460: 0x3090ffff  andi        $s0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e45c) {
            ctx->pc = 0x18E4CCu;
            goto label_18e4cc;
        }
    }
    ctx->pc = 0x18E464u;
    // 0x18e464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e468: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18E468u;
    {
        const bool branch_taken_0x18e468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e468) {
            ctx->pc = 0x18E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E468u;
            // 0x18e46c: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E4B4u;
            goto label_18e4b4;
        }
    }
    ctx->pc = 0x18E470u;
    // 0x18e470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e474: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E474u;
    {
        const bool branch_taken_0x18e474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e474) {
            ctx->pc = 0x18E478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E474u;
            // 0x18e478: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E4A0u;
            goto label_18e4a0;
        }
    }
    ctx->pc = 0x18E47Cu;
    // 0x18e47c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E47Cu;
    {
        const bool branch_taken_0x18e47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e47c) {
            ctx->pc = 0x18E480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E47Cu;
            // 0x18e480: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E48Cu;
            goto label_18e48c;
        }
    }
    ctx->pc = 0x18E484u;
    // 0x18e484: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18E484u;
    {
        const bool branch_taken_0x18e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e484) {
            ctx->pc = 0x18E4E0u;
            goto label_18e4e0;
        }
    }
    ctx->pc = 0x18E48Cu;
label_18e48c:
    // 0x18e48c: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18E48Cu;
    SET_GPR_U32(ctx, 31, 0x18E494u);
    ctx->pc = 0x18E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E48Cu;
    // 0x18e490: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE30u, 0x18E48Cu, 0x18E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E494u;
label_18e494:
    // 0x18e494: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18e494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e498: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18E498u;
    {
        const bool branch_taken_0x18e498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E498u;
        // 0x18e49c: 0xa3a000a0  sb          $zero, 0xA0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e498) {
            ctx->pc = 0x18E4E0u;
            goto label_18e4e0;
        }
    }
    ctx->pc = 0x18E4A0u;
label_18e4a0:
    // 0x18e4a0: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18E4A0u;
    SET_GPR_U32(ctx, 31, 0x18E4A8u);
    ctx->pc = 0x18E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4A0u;
    // 0x18e4a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE30u, 0x18E4A0u, 0x18E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4A8u;
label_18e4a8:
    // 0x18e4a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18e4a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18E4ACu;
    {
        const bool branch_taken_0x18e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4ACu;
        // 0x18e4b0: 0xa3a000a0  sb          $zero, 0xA0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4ac) {
            ctx->pc = 0x18E4E0u;
            goto label_18e4e0;
        }
    }
    ctx->pc = 0x18E4B4u;
label_18e4b4:
    // 0x18e4b4: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18E4B4u;
    SET_GPR_U32(ctx, 31, 0x18E4BCu);
    ctx->pc = 0x18E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4B4u;
    // 0x18e4b8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE30u, 0x18E4B4u, 0x18E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4BCu;
label_18e4bc:
    // 0x18e4bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18e4bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4c0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x18e4c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x18e4c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E4C4u;
    {
        const bool branch_taken_0x18e4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C4u;
        // 0x18e4c8: 0xa3a200a0  sb          $v0, 0xA0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4c4) {
            ctx->pc = 0x18E4E0u;
            goto label_18e4e0;
        }
    }
    ctx->pc = 0x18E4CCu;
label_18e4cc:
    // 0x18e4cc: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x18e4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18e4d0: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18E4D0u;
    SET_GPR_U32(ctx, 31, 0x18E4D8u);
    ctx->pc = 0x18E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4D0u;
    // 0x18e4d4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE30u, 0x18E4D0u, 0x18E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4D8u;
label_18e4d8:
    // 0x18e4d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18e4d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4dc: 0xa3a000a0  sb          $zero, 0xA0($sp)
    ctx->pc = 0x18e4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
label_18e4e0:
    // 0x18e4e0: 0x5280008c  beql        $s4, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x18E4E0u;
    {
        const bool branch_taken_0x18e4e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4e0) {
            ctx->pc = 0x18E4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E4E0u;
            // 0x18e4e4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E714u;
            goto label_18e714;
        }
    }
    ctx->pc = 0x18E4E8u;
    // 0x18e4e8: 0x96960000  lhu         $s6, 0x0($s4)
    ctx->pc = 0x18e4e8u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18e4ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18e4ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4f0: 0x1ac00033  blez        $s6, . + 4 + (0x33 << 2)
    ctx->pc = 0x18E4F0u;
    {
        const bool branch_taken_0x18e4f0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x18E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4F0u;
        // 0x18e4f4: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4f0) {
            ctx->pc = 0x18E5C0u;
            goto label_18e5c0;
        }
    }
    ctx->pc = 0x18E4F8u;
    // 0x18e4f8: 0x32b70200  andi        $s7, $s5, 0x200
    ctx->pc = 0x18e4f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x18e4fc: 0x96930000  lhu         $s3, 0x0($s4)
    ctx->pc = 0x18e4fcu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_18e500:
    // 0x18e500: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e504: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x18e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x18e508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E508u;
    {
        const bool branch_taken_0x18e508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E508u;
        // 0x18e50c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e508) {
            ctx->pc = 0x18E518u;
            goto label_18e518;
        }
    }
    ctx->pc = 0x18E510u;
    // 0x18e510: 0x12e00027  beqz        $s7, . + 4 + (0x27 << 2)
    ctx->pc = 0x18E510u;
    {
        const bool branch_taken_0x18e510 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e510) {
            ctx->pc = 0x18E5B0u;
            goto label_18e5b0;
        }
    }
    ctx->pc = 0x18E518u;
label_18e518:
    // 0x18e518: 0x131183  sra         $v0, $s3, 6
    ctx->pc = 0x18e518u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 6));
    // 0x18e51c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x18e51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x18e520: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e524: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18E524u;
    {
        const bool branch_taken_0x18e524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e524) {
            ctx->pc = 0x18E5A0u;
            goto label_18e5a0;
        }
    }
    ctx->pc = 0x18E52Cu;
    // 0x18e52c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e530: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18E530u;
    {
        const bool branch_taken_0x18e530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e530) {
            ctx->pc = 0x18E580u;
            goto label_18e580;
        }
    }
    ctx->pc = 0x18E538u;
    // 0x18e538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e53c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E53Cu;
    {
        const bool branch_taken_0x18e53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e53c) {
            ctx->pc = 0x18E560u;
            goto label_18e560;
        }
    }
    ctx->pc = 0x18E544u;
    // 0x18e544: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E544u;
    {
        const bool branch_taken_0x18e544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e544) {
            ctx->pc = 0x18E558u;
            goto label_18e558;
        }
    }
    ctx->pc = 0x18E54Cu;
    // 0x18e54c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18E54Cu;
    {
        const bool branch_taken_0x18e54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e54c) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E554u;
    // 0x18e554: 0x0  nop
    ctx->pc = 0x18e554u;
    // NOP
label_18e558:
    // 0x18e558: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18E558u;
    {
        const bool branch_taken_0x18e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E558u;
        // 0x18e55c: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e558) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E560u;
label_18e560:
    // 0x18e560: 0xc062838  jal         func_18A0E0
    ctx->pc = 0x18E560u;
    SET_GPR_U32(ctx, 31, 0x18E568u);
    ctx->pc = 0x18E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E560u;
    // 0x18e564: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0E0u, 0x18E560u, 0x18E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E568u;
label_18e568:
    // 0x18e568: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18e568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e56c: 0x3262003f  andi        $v0, $s3, 0x3F
    ctx->pc = 0x18e56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
    // 0x18e570: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18E570u;
    {
        const bool branch_taken_0x18e570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e570) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E578u;
    // 0x18e578: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18E578u;
    {
        const bool branch_taken_0x18e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E578u;
        // 0x18e57c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e578) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E580u;
label_18e580:
    // 0x18e580: 0xc062804  jal         func_18A010
    ctx->pc = 0x18E580u;
    SET_GPR_U32(ctx, 31, 0x18E588u);
    ctx->pc = 0x18E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E580u;
    // 0x18e584: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x18E580u, 0x18E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E588u;
label_18e588:
    // 0x18e588: 0x944200ea  lhu         $v0, 0xEA($v0)
    ctx->pc = 0x18e588u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
    // 0x18e58c: 0x3263003f  andi        $v1, $s3, 0x3F
    ctx->pc = 0x18e58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
    // 0x18e590: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E590u;
    {
        const bool branch_taken_0x18e590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e590) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E598u;
    // 0x18e598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18E598u;
    {
        const bool branch_taken_0x18e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E598u;
        // 0x18e59c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e598) {
            ctx->pc = 0x18E5A8u;
            goto label_18e5a8;
        }
    }
    ctx->pc = 0x18E5A0u;
label_18e5a0:
    // 0x18e5a0: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x18e5a0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x18e5a4: 0x0  nop
    ctx->pc = 0x18e5a4u;
    // NOP
label_18e5a8:
    // 0x18e5a8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E5A8u;
    {
        const bool branch_taken_0x18e5a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e5a8) {
            ctx->pc = 0x18E5C0u;
            goto label_18e5c0;
        }
    }
    ctx->pc = 0x18E5B0u;
label_18e5b0:
    // 0x18e5b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18e5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18e5b4: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x18e5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x18e5b8: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x18E5B8u;
    {
        const bool branch_taken_0x18e5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e5b8) {
            ctx->pc = 0x18E5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E5B8u;
            // 0x18e5bc: 0x96930000  lhu         $s3, 0x0($s4) (Delay Slot)
            SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18e500;
        }
    }
    ctx->pc = 0x18E5C0u;
label_18e5c0:
    // 0x18e5c0: 0x256082a  slt         $at, $s2, $s6
    ctx->pc = 0x18e5c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x18e5c4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E5C4u;
    {
        const bool branch_taken_0x18e5c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e5c4) {
            ctx->pc = 0x18E5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E5C4u;
            // 0x18e5c8: 0x93a200a0  lbu         $v0, 0xA0($sp) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E5D4u;
            goto label_18e5d4;
        }
    }
    ctx->pc = 0x18E5CCu;
    // 0x18e5cc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x18E5CCu;
    {
        const bool branch_taken_0x18e5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5CCu;
        // 0x18e5d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5cc) {
            ctx->pc = 0x18E718u;
            goto label_18e718;
        }
    }
    ctx->pc = 0x18E5D4u;
label_18e5d4:
    // 0x18e5d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E5D4u;
    {
        const bool branch_taken_0x18e5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e5d4) {
            ctx->pc = 0x18E5E0u;
            goto label_18e5e0;
        }
    }
    ctx->pc = 0x18E5DCu;
    // 0x18e5dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18e5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e5e0:
    // 0x18e5e0: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x18E5E0u;
    {
        const bool branch_taken_0x18e5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5e0) {
            ctx->pc = 0x18E5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E5E0u;
            // 0x18e5e4: 0x3266ffff  andi        $a2, $s3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E644u;
            goto label_18e644;
        }
    }
    ctx->pc = 0x18E5E8u;
    // 0x18e5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5ec: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x18e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18e5f0: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x18e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_18e5f4:
    // 0x18e5f4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x18e5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18e5f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18e5fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E5FCu;
    {
        const bool branch_taken_0x18e5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5fc) {
            ctx->pc = 0x18E618u;
            goto label_18e618;
        }
    }
    ctx->pc = 0x18E604u;
    // 0x18e604: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18e608: 0x30be00ff  andi        $fp, $a1, 0xFF
    ctx->pc = 0x18e608u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18e60c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x18e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x18e610: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x18e610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18e614: 0x0  nop
    ctx->pc = 0x18e614u;
    // NOP
label_18e618:
    // 0x18e618: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18e618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18e61c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x18e61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18e620: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x18E620u;
    {
        const bool branch_taken_0x18e620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e620) {
            ctx->pc = 0x18E624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E620u;
            // 0x18e624: 0xa41804  sllv        $v1, $a0, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E5F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18e5f4;
        }
    }
    ctx->pc = 0x18E628u;
    // 0x18e628: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x18e628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x18e62c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x18e62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18e630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18e630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18e634: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x18E634u;
    {
        const bool branch_taken_0x18e634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e634) {
            ctx->pc = 0x18E638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E634u;
            // 0x18e638: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E718u;
            goto label_18e718;
        }
    }
    ctx->pc = 0x18E63Cu;
    // 0x18e63c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18E63Cu;
    {
        const bool branch_taken_0x18e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E63Cu;
        // 0x18e640: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e63c) {
            ctx->pc = 0x18E714u;
            goto label_18e714;
        }
    }
    ctx->pc = 0x18E644u;
label_18e644:
    // 0x18e644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18e644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18e648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e64c: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x18e64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x18e650: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x18e650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e654: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x18e654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_18e658:
    // 0x18e658: 0xe41004  sllv        $v0, $a0, $a3
    ctx->pc = 0x18e658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x18e65c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x18e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x18e660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E660u;
    {
        const bool branch_taken_0x18e660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E660u;
        // 0x18e664: 0xa1050000  sb          $a1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e660) {
            ctx->pc = 0x18E680u;
            goto label_18e680;
        }
    }
    ctx->pc = 0x18E668u;
    // 0x18e668: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x18e668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18e66c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x18e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18e670: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x18e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x18e674: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x18e674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e678: 0xa06700b8  sb          $a3, 0xB8($v1)
    ctx->pc = 0x18e678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 7));
    // 0x18e67c: 0x0  nop
    ctx->pc = 0x18e67cu;
    // NOP
label_18e680:
    // 0x18e680: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18e680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18e684: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x18e684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x18e688: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x18E688u;
    {
        const bool branch_taken_0x18e688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E688u;
        // 0x18e68c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e688) {
            ctx->pc = 0x18E658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18e658;
        }
    }
    ctx->pc = 0x18E690u;
    // 0x18e690: 0xc067c48  jal         func_19F120
    ctx->pc = 0x18E690u;
    SET_GPR_U32(ctx, 31, 0x18E698u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x18E690u, 0x18E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E698u;
label_18e698:
    // 0x18e698: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E698u;
    {
        const bool branch_taken_0x18e698 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18e698) {
            ctx->pc = 0x18E69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E698u;
            // 0x18e69c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E6ACu;
            goto label_18e6ac;
        }
    }
    ctx->pc = 0x18E6A0u;
    // 0x18e6a0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x18e6a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e6a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18E6A4u;
    {
        const bool branch_taken_0x18e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6A4u;
        // 0x18e6a8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6a4) {
            ctx->pc = 0x18E6C4u;
            goto label_18e6c4;
        }
    }
    ctx->pc = 0x18E6ACu;
label_18e6ac:
    // 0x18e6ac: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x18e6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x18e6b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18e6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18e6b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18e6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e6b8: 0x0  nop
    ctx->pc = 0x18e6b8u;
    // NOP
    // 0x18e6bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18e6bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18e6c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18e6c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18e6c4:
    // 0x18e6c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18e6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18e6c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x18e6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e6d0: 0x0  nop
    ctx->pc = 0x18e6d0u;
    // NOP
    // 0x18e6d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18e6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18e6d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x18E6D8u;
    {
        const bool branch_taken_0x18e6d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e6d8) {
            ctx->pc = 0x18E6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E6D8u;
            // 0x18e6dc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E6F0u;
            goto label_18e6f0;
        }
    }
    ctx->pc = 0x18E6E0u;
    // 0x18e6e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e6e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18e6e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18e6e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18e6e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18E6E8u;
    {
        const bool branch_taken_0x18e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6E8u;
        // 0x18e6ec: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6e8) {
            ctx->pc = 0x18E708u;
            goto label_18e708;
        }
    }
    ctx->pc = 0x18E6F0u;
label_18e6f0:
    // 0x18e6f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x18e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18e6f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e6f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18e6f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18e6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18e6fc: 0x0  nop
    ctx->pc = 0x18e6fcu;
    // NOP
    // 0x18e700: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18e700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18e704: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18e704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18e708:
    // 0x18e708: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x18e708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18e70c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18e710: 0x905e00b8  lbu         $fp, 0xB8($v0)
    ctx->pc = 0x18e710u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 184)));
label_18e714:
    // 0x18e714: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x18e714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_18e718:
    // 0x18e718: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18e718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18e71c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18e71cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18e720: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18e720u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e724: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18e724u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18e728: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18e728u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e72c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18e72cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e730: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18e730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e740: 0x3e00008  jr          $ra
    ctx->pc = 0x18E740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E740u;
        // 0x18e744: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E748u;
    // 0x18e748: 0x0  nop
    ctx->pc = 0x18e748u;
    // NOP
    // 0x18e74c: 0x0  nop
    ctx->pc = 0x18e74cu;
    // NOP
}
