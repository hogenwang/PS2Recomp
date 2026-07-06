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

// Function: kofxiStartFrameSchedulerSystem
// Address: 0x1b4298 - 0x1b4488
void kofxiStartFrameSchedulerSystem_0x1b4298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiStartFrameSchedulerSystem_0x1b4298");
#endif

    switch (ctx->pc) {
        case 0x1b42d4u: goto label_1b42d4;
        case 0x1b42e4u: goto label_1b42e4;
        case 0x1b42f4u: goto label_1b42f4;
        case 0x1b43c4u: goto label_1b43c4;
        case 0x1b43dcu: goto label_1b43dc;
        case 0x1b43ecu: goto label_1b43ec;
        case 0x1b43f8u: goto label_1b43f8;
        case 0x1b4400u: goto label_1b4400;
        case 0x1b4408u: goto label_1b4408;
        case 0x1b4410u: goto label_1b4410;
        case 0x1b441cu: goto label_1b441c;
        case 0x1b4428u: goto label_1b4428;
        case 0x1b443cu: goto label_1b443c;
        case 0x1b4450u: goto label_1b4450;
        default: break;
    }

    ctx->pc = 0x1b4298u;

    // 0x1b4298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b4298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b429c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b429cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b42a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1b42a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1b42a4: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1b42a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1b42a8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1b42a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1b42ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b42acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b42b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1b42b4: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x1b42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x1b42b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1b42b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1b42bc: 0x8e432ff4  lw          $v1, 0x2FF4($s2)
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12276)));
    // 0x1b42c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b42c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b42c4: 0x54600066  bnel        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x1B42C4u;
    {
        const bool branch_taken_0x1b42c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42c4) {
            ctx->pc = 0x1B42C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B42C4u;
            // 0x1b42c8: 0x26432ff4  addiu       $v1, $s2, 0x2FF4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4460u;
            goto label_1b4460;
        }
    }
    ctx->pc = 0x1B42CCu;
    // 0x1b42cc: 0xc0739d2  jal         func_1CE748
    ctx->pc = 0x1B42CCu;
    SET_GPR_U32(ctx, 31, 0x1B42D4u);
    ctx->pc = 0x1CE748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE748u, 0x1B42CCu, 0x1B42D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42D4u;
label_1b42d4:
    // 0x1b42d4: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b42d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b42d8: 0x248429a0  addiu       $a0, $a0, 0x29A0
    ctx->pc = 0x1b42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10656));
    // 0x1b42dc: 0xc07390a  jal         func_1CE428
    ctx->pc = 0x1B42DCu;
    SET_GPR_U32(ctx, 31, 0x1B42E4u);
    ctx->pc = 0x1B42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42DCu;
    // 0x1b42e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE428u, 0x1B42DCu, 0x1B42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42E4u;
label_1b42e4:
    // 0x1b42e4: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b42e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b42e8: 0x24842a28  addiu       $a0, $a0, 0x2A28
    ctx->pc = 0x1b42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10792));
    // 0x1b42ec: 0xc073910  jal         func_1CE440
    ctx->pc = 0x1B42ECu;
    SET_GPR_U32(ctx, 31, 0x1B42F4u);
    ctx->pc = 0x1B42F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42ECu;
    // 0x1b42f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE440u, 0x1B42ECu, 0x1B42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42F4u;
label_1b42f4:
    // 0x1b42f4: 0x56200018  bnel        $s1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B42F4u;
    {
        const bool branch_taken_0x1b42f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b42f4) {
            ctx->pc = 0x1B42F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B42F4u;
            // 0x1b42f8: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4358u;
            goto label_1b4358;
        }
    }
    ctx->pc = 0x1B42FCu;
    // 0x1b42fc: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b42fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b4300: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1b4300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b4304: 0x26023000  addiu       $v0, $s0, 0x3000
    ctx->pc = 0x1b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    // 0x1b4308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b430c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4310: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b4310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4314: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b4314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b4318: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1b4318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b431c: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x1b431cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b4320: 0x2409001a  addiu       $t1, $zero, 0x1A
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1b4324: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x1b4324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x1b4328: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b4328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b432c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1b432cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1b4330: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1b4330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1b4334: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1b4334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1b4338: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1b4338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1b433c: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x1b433cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
    // 0x1b4340: 0xac49001c  sw          $t1, 0x1C($v0)
    ctx->pc = 0x1b4340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
    // 0x1b4344: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1b4344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1b4348: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1b4348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1b434c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1b434cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1b4350: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B4350u;
    {
        const bool branch_taken_0x1b4350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4350u;
        // 0x1b4354: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4350) {
            ctx->pc = 0x1B43BCu;
            goto label_1b43bc;
        }
    }
    ctx->pc = 0x1B4358u;
label_1b4358:
    // 0x1b4358: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b435c: 0x26043000  addiu       $a0, $s0, 0x3000
    ctx->pc = 0x1b435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    // 0x1b4360: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1b4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b4364: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1b4364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1b4368: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1b4368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1b436c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4370: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1b4370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1b4374: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b4374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b4378: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x1b4378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x1b437c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b4380: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1b4380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b4384: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b4384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b4388: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1b4388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1b438c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b4390: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1b4390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1b4394: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1b4394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b4398: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1b4398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1b439c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1b439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b43a0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1b43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1b43a4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1b43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b43a8: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1b43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1b43ac: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b43acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1b43b0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1b43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1b43b4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1b43b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1b43b8: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1b43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_1b43bc:
    // 0x1b43bc: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x1B43BCu;
    SET_GPR_U32(ctx, 31, 0x1B43C4u);
    ctx->pc = 0x1B43C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43BCu;
    // 0x1b43c0: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x1B43BCu, 0x1B43C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43C4u;
label_1b43c4:
    // 0x1b43c4: 0x26313098  addiu       $s1, $s1, 0x3098
    ctx->pc = 0x1b43c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12440));
    // 0x1b43c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b43c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b43d0: 0x26103000  addiu       $s0, $s0, 0x3000
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    // 0x1b43d4: 0xc0432d8  jal         func_10CB60
    ctx->pc = 0x1B43D4u;
    SET_GPR_U32(ctx, 31, 0x1B43DCu);
    ctx->pc = 0x1B43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43D4u;
    // 0x1b43d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB60u, 0x1B43D4u, 0x1B43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43DCu;
label_1b43dc:
    // 0x1b43dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b43dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b43e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1b43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b43e4: 0xc06cc98  jal         func_1B3260
    ctx->pc = 0x1B43E4u;
    SET_GPR_U32(ctx, 31, 0x1B43ECu);
    ctx->pc = 0x1B43E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43E4u;
    // 0x1b43e8: 0xac62a928  sw          $v0, -0x56D8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3260u, 0x1B43E4u, 0x1B43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43ECu;
label_1b43ec:
    // 0x1b43ec: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1b43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b43f0: 0xc06ccc2  jal         func_1B3308
    ctx->pc = 0x1B43F0u;
    SET_GPR_U32(ctx, 31, 0x1B43F8u);
    ctx->pc = 0x1B43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43F0u;
    // 0x1b43f4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3308u, 0x1B43F0u, 0x1B43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43F8u;
label_1b43f8:
    // 0x1b43f8: 0xc06ccf0  jal         func_1B33C0
    ctx->pc = 0x1B43F8u;
    SET_GPR_U32(ctx, 31, 0x1B4400u);
    ctx->pc = 0x1B33C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B33C0u, 0x1B43F8u, 0x1B4400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4400u;
label_1b4400:
    // 0x1b4400: 0xc06cd12  jal         func_1B3448
    ctx->pc = 0x1B4400u;
    SET_GPR_U32(ctx, 31, 0x1B4408u);
    ctx->pc = 0x1B3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3448u, 0x1B4400u, 0x1B4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4408u;
label_1b4408:
    // 0x1b4408: 0xc06cd34  jal         func_1B34D0
    ctx->pc = 0x1B4408u;
    SET_GPR_U32(ctx, 31, 0x1B4410u);
    ctx->pc = 0x1B34D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B34D0u, 0x1B4408u, 0x1B4410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4410u;
label_1b4410:
    // 0x1b4410: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1b4410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b4414: 0xc06cd5a  jal         func_1B3568
    ctx->pc = 0x1B4414u;
    SET_GPR_U32(ctx, 31, 0x1B441Cu);
    ctx->pc = 0x1B4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4414u;
    // 0x1b4418: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3568u, 0x1B4414u, 0x1B441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B441Cu;
label_1b441c:
    // 0x1b441c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4420: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B4420u;
    SET_GPR_U32(ctx, 31, 0x1B4428u);
    ctx->pc = 0x1B4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4420u;
    // 0x1b4424: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B4420u, 0x1B4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4428u;
label_1b4428:
    // 0x1b4428: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b4428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b442c: 0x24a52b80  addiu       $a1, $a1, 0x2B80
    ctx->pc = 0x1b442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11136));
    // 0x1b4430: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4434: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1B4434u;
    SET_GPR_U32(ctx, 31, 0x1B443Cu);
    ctx->pc = 0x1B4438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4434u;
    // 0x1b4438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1B4434u, 0x1B443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B443Cu;
label_1b443c:
    // 0x1b443c: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b443cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b4440: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8
    ctx->pc = 0x1b4440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
    // 0x1b4444: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4448: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1B4448u;
    SET_GPR_U32(ctx, 31, 0x1B4450u);
    ctx->pc = 0x1B444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4448u;
    // 0x1b444c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1B4448u, 0x1B4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4450u;
label_1b4450:
    // 0x1b4450: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b4450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b4454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4458: 0xac622ff8  sw          $v0, 0x2FF8($v1)
    ctx->pc = 0x1b4458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12280), GPR_U32(ctx, 2));
    // 0x1b445c: 0x26432ff4  addiu       $v1, $s2, 0x2FF4
    ctx->pc = 0x1b445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12276));
label_1b4460:
    // 0x1b4460: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1b4460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4464: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4468: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b4468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b446c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1b446cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b4470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4474: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b4474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b4478: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b4478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b447c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B447Cu;
        // 0x1b4480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B447Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4484u;
    // 0x1b4484: 0x0  nop
    ctx->pc = 0x1b4484u;
    // NOP
    if (ctx->pc == 0x1b4484u) { ctx->pc = 0x1b4488u; }
}
