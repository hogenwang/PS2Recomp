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

// Function: sub_001FA790
// Address: 0x1fa790 - 0x1fa920
void sub_001FA790_0x1fa790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA790_0x1fa790");
#endif

    switch (ctx->pc) {
        case 0x1fa7f4u: goto label_1fa7f4;
        case 0x1fa848u: goto label_1fa848;
        case 0x1fa884u: goto label_1fa884;
        case 0x1fa89cu: goto label_1fa89c;
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8d0u: goto label_1fa8d0;
        default: break;
    }

    ctx->pc = 0x1fa790u;

    // 0x1fa790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa794: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fa794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa79c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fa79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa7a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fa7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa7ac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1fa7acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7b0: 0x8c620dc0  lw          $v0, 0xDC0($v1)
    ctx->pc = 0x1fa7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3520)));
    // 0x1fa7b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA7B4u;
    {
        const bool branch_taken_0x1fa7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7B4u;
        // 0x1fa7b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7b4) {
            ctx->pc = 0x1FA7D0u;
            goto label_1fa7d0;
        }
    }
    ctx->pc = 0x1FA7BCu;
    // 0x1fa7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa7c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa7c8: 0x807ea06  j           func_1FA818
    ctx->pc = 0x1FA7C8u;
    ctx->pc = 0x1FA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7C8u;
    // 0x1fa7cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA818u;
    goto label_1fa818;
    ctx->pc = 0x1FA7D0u;
label_1fa7d0:
    // 0x1fa7d0: 0x8c620da8  lw          $v0, 0xDA8($v1)
    ctx->pc = 0x1fa7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3496)));
    // 0x1fa7d4: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA7D4u;
    {
        const bool branch_taken_0x1fa7d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7D4u;
        // 0x1fa7d8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7d4) {
            ctx->pc = 0x1FA7E8u;
            goto label_1fa7e8;
        }
    }
    ctx->pc = 0x1FA7DCu;
    // 0x1fa7dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA7DCu;
    {
        const bool branch_taken_0x1fa7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7DCu;
        // 0x1fa7e0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7dc) {
            ctx->pc = 0x1FA7F8u;
            goto label_1fa7f8;
        }
    }
    ctx->pc = 0x1FA7E4u;
    // 0x1fa7e4: 0x0  nop
    ctx->pc = 0x1fa7e4u;
    // NOP
label_1fa7e8:
    // 0x1fa7e8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1fa7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7ec: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FA7ECu;
    SET_GPR_U32(ctx, 31, 0x1FA7F4u);
    ctx->pc = 0x1FA7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7ECu;
    // 0x1fa7f0: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1FA7ECu, 0x1FA7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7F4u;
label_1fa7f4:
    // 0x1fa7f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fa7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fa7f8:
    // 0x1fa7f8: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1fa7fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa800: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fa800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fa804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa808: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa80c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA80Cu;
        // 0x1fa810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA814u;
    // 0x1fa814: 0x0  nop
    ctx->pc = 0x1fa814u;
    // NOP
label_1fa818:
    // 0x1fa818: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1fa818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1fa81c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1fa81cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1fa820: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA820u;
        // 0x1fa824: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA828u;
    // 0x1fa828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa82c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa834: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fa838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa83c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fa83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fa840: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA840u;
    SET_GPR_U32(ctx, 31, 0x1FA848u);
    ctx->pc = 0x1FA844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA840u;
    // 0x1fa844: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FA840u, 0x1FA848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA848u;
label_1fa848:
    // 0x1fa848: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa84c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA84Cu;
    {
        const bool branch_taken_0x1fa84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA84Cu;
        // 0x1fa850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa84c) {
            ctx->pc = 0x1FA870u;
            goto label_1fa870;
        }
    }
    ctx->pc = 0x1FA854u;
    // 0x1fa854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa858: 0x34a50158  ori         $a1, $a1, 0x158
    ctx->pc = 0x1fa858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)344);
    // 0x1fa85c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa864: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fa864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa868: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FA868u;
    ctx->pc = 0x1FA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA868u;
    // 0x1fa86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FA870u;
label_1fa870:
    // 0x1fa870: 0x8e113708  lw          $s1, 0x3708($s0)
    ctx->pc = 0x1fa870u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1fa874: 0x52200025  beql        $s1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FA874u;
    {
        const bool branch_taken_0x1fa874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa874) {
            ctx->pc = 0x1FA878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA874u;
            // 0x1fa878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA90Cu;
            goto label_1fa90c;
        }
    }
    ctx->pc = 0x1FA87Cu;
    // 0x1fa87c: 0xc07e34a  jal         func_1F8D28
    ctx->pc = 0x1FA87Cu;
    SET_GPR_U32(ctx, 31, 0x1FA884u);
    ctx->pc = 0x1FA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA87Cu;
    // 0x1fa880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8D28u, 0x1FA87Cu, 0x1FA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA884u;
label_1fa884:
    // 0x1fa884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa888: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x1fa888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1fa88c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FA88Cu;
    {
        const bool branch_taken_0x1fa88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA88Cu;
        // 0x1fa890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa88c) {
            ctx->pc = 0x1FA908u;
            goto label_1fa908;
        }
    }
    ctx->pc = 0x1FA894u;
    // 0x1fa894: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FA894u;
    SET_GPR_U32(ctx, 31, 0x1FA89Cu);
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1FA894u, 0x1FA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA89Cu;
label_1fa89c:
    // 0x1fa89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa8a0: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x1fa8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
    // 0x1fa8a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fa8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fa8a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA8A8u;
    {
        const bool branch_taken_0x1fa8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8A8u;
        // 0x1fa8ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8a8) {
            ctx->pc = 0x1FA8B8u;
            goto label_1fa8b8;
        }
    }
    ctx->pc = 0x1FA8B0u;
    // 0x1fa8b0: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FA8B0u;
    SET_GPR_U32(ctx, 31, 0x1FA8B8u);
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1FA8B0u, 0x1FA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8B8u;
label_1fa8b8:
    // 0x1fa8b8: 0x8e220dbc  lw          $v0, 0xDBC($s1)
    ctx->pc = 0x1fa8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3516)));
    // 0x1fa8bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA8BCu;
    {
        const bool branch_taken_0x1fa8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8BCu;
        // 0x1fa8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8bc) {
            ctx->pc = 0x1FA8D0u;
            goto label_1fa8d0;
        }
    }
    ctx->pc = 0x1FA8C4u;
    // 0x1fa8c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1fa8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fa8c8: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FA8C8u;
    SET_GPR_U32(ctx, 31, 0x1FA8D0u);
    ctx->pc = 0x1FA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8C8u;
    // 0x1fa8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1FA8C8u, 0x1FA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8D0u;
label_1fa8d0:
    // 0x1fa8d0: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x1fa8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fa8d4: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x1fa8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fa8d8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1fa8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fa8dc: 0xb2023713  sdl         $v0, 0x3713($s0)
    ctx->pc = 0x1fa8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 14099); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fa8e0: 0xb602370c  sdr         $v0, 0x370C($s0)
    ctx->pc = 0x1fa8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 14092); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fa8e4: 0xae033714  sw          $v1, 0x3714($s0)
    ctx->pc = 0x1fa8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14100), GPR_U32(ctx, 3));
    // 0x1fa8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa8ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa8f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1fa8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1fa8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa8f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa8fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fa8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa900: 0x807f63c  j           func_1FD8F0
    ctx->pc = 0x1FA900u;
    ctx->pc = 0x1FA904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA900u;
    // 0x1fa904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8F0u, 0x1FA900u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FA908u;
label_1fa908:
    // 0x1fa908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa90c:
    // 0x1fa90c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa910: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa914: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fa914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa918: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA918u;
        // 0x1fa91c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA920u;
}
