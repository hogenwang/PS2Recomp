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

// Function: sub_00276FE8
// Address: 0x276fe8 - 0x2773b0
void sub_00276FE8_0x276fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276FE8_0x276fe8");
#endif

    switch (ctx->pc) {
        case 0x277040u: goto label_277040;
        case 0x277088u: goto label_277088;
        case 0x277098u: goto label_277098;
        case 0x2770acu: goto label_2770ac;
        case 0x2770c4u: goto label_2770c4;
        case 0x2770dcu: goto label_2770dc;
        case 0x277130u: goto label_277130;
        case 0x277160u: goto label_277160;
        case 0x2771b0u: goto label_2771b0;
        case 0x2771b8u: goto label_2771b8;
        case 0x277230u: goto label_277230;
        case 0x277238u: goto label_277238;
        case 0x2772b0u: goto label_2772b0;
        case 0x2772b8u: goto label_2772b8;
        case 0x277330u: goto label_277330;
        case 0x277338u: goto label_277338;
        default: break;
    }

    ctx->pc = 0x276fe8u;

    // 0x276fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x276fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x276fec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x276fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x276ff0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x276ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ff4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x276ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276ff8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x276ff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ffc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x276ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x277000: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x277000u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x277004: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x277004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x277008: 0x26622d78  addiu       $v0, $s3, 0x2D78
    ctx->pc = 0x277008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
    // 0x27700c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x277010: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x277010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277014: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x277014u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x277018: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x277018u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27701c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x27701cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x277020: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x277020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x277024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x277024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277028: 0x8c6306a4  lw          $v1, 0x6A4($v1)
    ctx->pc = 0x277028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1700)));
    // 0x27702c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x27702cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x277030: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x277030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277034: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x277034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x277038: 0xc09db60  jal         func_276D80
    ctx->pc = 0x277038u;
    SET_GPR_U32(ctx, 31, 0x277040u);
    ctx->pc = 0x27703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277038u;
    // 0x27703c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D80u, 0x277038u, 0x277040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277040u;
label_277040:
    // 0x277040: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x277040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x277044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x277044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277048: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x277048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27704c: 0x2e460009  sltiu       $a2, $s2, 0x9
    ctx->pc = 0x27704cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x277050: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x277050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x277054: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x277054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x277058: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x277058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27705c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x27705cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x277060: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x277060u;
    {
        const bool branch_taken_0x277060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x277064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277060u;
        // 0x277064: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277060) {
            ctx->pc = 0x277108u;
            goto label_277108;
        }
    }
    ctx->pc = 0x277068u;
    // 0x277068: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x277068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27706c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27706cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x277070: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x277070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277074: 0x8c639f80  lw          $v1, -0x6080($v1)
    ctx->pc = 0x277074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942592)));
    // 0x277078: 0x600008  jr          $v1
    ctx->pc = 0x277078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277080u: goto label_277080;
            case 0x277090u: goto label_277090;
            case 0x2770A0u: goto label_2770a0;
            case 0x2770B8u: goto label_2770b8;
            case 0x2770D0u: goto label_2770d0;
            case 0x277108u: goto label_277108;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277078u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x277080u;
label_277080:
    // 0x277080: 0xc09db78  jal         func_276DE0
    ctx->pc = 0x277080u;
    SET_GPR_U32(ctx, 31, 0x277088u);
    ctx->pc = 0x277084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277080u;
    // 0x277084: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276DE0u, 0x277080u, 0x277088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277088u;
label_277088:
    // 0x277088: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x277088u;
    {
        const bool branch_taken_0x277088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277088u;
        // 0x27708c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277088) {
            ctx->pc = 0x2770E0u;
            goto label_2770e0;
        }
    }
    ctx->pc = 0x277090u;
label_277090:
    // 0x277090: 0xc09dbb4  jal         func_276ED0
    ctx->pc = 0x277090u;
    SET_GPR_U32(ctx, 31, 0x277098u);
    ctx->pc = 0x277094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277090u;
    // 0x277094: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276ED0u, 0x277090u, 0x277098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277098u;
label_277098:
    // 0x277098: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x277098u;
    {
        const bool branch_taken_0x277098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277098u;
        // 0x27709c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277098) {
            ctx->pc = 0x2770E0u;
            goto label_2770e0;
        }
    }
    ctx->pc = 0x2770A0u;
label_2770a0:
    // 0x2770a0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2770a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2770a4: 0xc09dbca  jal         func_276F28
    ctx->pc = 0x2770A4u;
    SET_GPR_U32(ctx, 31, 0x2770ACu);
    ctx->pc = 0x2770A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770A4u;
    // 0x2770a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276F28u, 0x2770A4u, 0x2770ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770ACu;
label_2770ac:
    // 0x2770ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2770ACu;
    {
        const bool branch_taken_0x2770ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770ACu;
        // 0x2770b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770ac) {
            ctx->pc = 0x2770E0u;
            goto label_2770e0;
        }
    }
    ctx->pc = 0x2770B4u;
    // 0x2770b4: 0x0  nop
    ctx->pc = 0x2770b4u;
    // NOP
label_2770b8:
    // 0x2770b8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2770b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2770bc: 0xc09dbde  jal         func_276F78
    ctx->pc = 0x2770BCu;
    SET_GPR_U32(ctx, 31, 0x2770C4u);
    ctx->pc = 0x2770C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770BCu;
    // 0x2770c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276F78u, 0x2770BCu, 0x2770C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770C4u;
label_2770c4:
    // 0x2770c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2770C4u;
    {
        const bool branch_taken_0x2770c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770C4u;
        // 0x2770c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770c4) {
            ctx->pc = 0x2770E0u;
            goto label_2770e0;
        }
    }
    ctx->pc = 0x2770CCu;
    // 0x2770cc: 0x0  nop
    ctx->pc = 0x2770ccu;
    // NOP
label_2770d0:
    // 0x2770d0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2770d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2770d4: 0xc09dbe6  jal         func_276F98
    ctx->pc = 0x2770D4u;
    SET_GPR_U32(ctx, 31, 0x2770DCu);
    ctx->pc = 0x2770D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770D4u;
    // 0x2770d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276F98u, 0x2770D4u, 0x2770DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770DCu;
label_2770dc:
    // 0x2770dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2770dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2770e0:
    // 0x2770e0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2770e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2770e4: 0x4800028  bltz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2770E4u;
    {
        const bool branch_taken_0x2770e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2770E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770E4u;
        // 0x2770e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770e4) {
            ctx->pc = 0x277188u;
            goto label_277188;
        }
    }
    ctx->pc = 0x2770ECu;
    // 0x2770ec: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2770ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2770f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2770f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2770f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2770f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2770f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2770f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2770fc: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2770fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x277100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x277100u;
    {
        const bool branch_taken_0x277100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277100u;
        // 0x277104: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277100) {
            ctx->pc = 0x277110u;
            goto label_277110;
        }
    }
    ctx->pc = 0x277108u;
label_277108:
    // 0x277108: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x277108u;
    {
        const bool branch_taken_0x277108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277108u;
        // 0x27710c: 0x2411ff95  addiu       $s1, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277108) {
            ctx->pc = 0x277188u;
            goto label_277188;
        }
    }
    ctx->pc = 0x277110u;
label_277110:
    // 0x277110: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x277110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
    // 0x277114: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x277114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x277118: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x277118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27711c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x277120: 0x8c4206a4  lw          $v0, 0x6A4($v0)
    ctx->pc = 0x277120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1700)));
    // 0x277124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277128: 0xc09dbee  jal         func_276FB8
    ctx->pc = 0x277128u;
    SET_GPR_U32(ctx, 31, 0x277130u);
    ctx->pc = 0x27712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277128u;
    // 0x27712c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FB8u, 0x277128u, 0x277130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277130u;
label_277130:
    // 0x277130: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x277130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x277134: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x277134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277138: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x277138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27713c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277140: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x277140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x277144: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x277144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x277148: 0x8cc6069c  lw          $a2, 0x69C($a2)
    ctx->pc = 0x277148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1692)));
    // 0x27714c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x27714cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x277150: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x277150u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x277154: 0xac2206a8  sw          $v0, 0x6A8($at)
    ctx->pc = 0x277154u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1704), GPR_U32(ctx, 2));
    // 0x277158: 0xc09d9bc  jal         func_2766F0
    ctx->pc = 0x277158u;
    SET_GPR_U32(ctx, 31, 0x277160u);
    ctx->pc = 0x27715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277158u;
    // 0x27715c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766F0u, 0x277158u, 0x277160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277160u;
label_277160:
    // 0x277160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277164: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x277164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277168: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x277168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x27716c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27716Cu;
    {
        const bool branch_taken_0x27716c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x277170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27716Cu;
        // 0x277170: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27716c) {
            ctx->pc = 0x277188u;
            goto label_277188;
        }
    }
    ctx->pc = 0x277174u;
    // 0x277174: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x277174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277178: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x277178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x27717c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x27717cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x277180: 0xac2306a0  sw          $v1, 0x6A0($at)
    ctx->pc = 0x277180u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1696), GPR_U32(ctx, 3));
    // 0x277184: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x277184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_277188:
    // 0x277188: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x277188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x27718c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27718cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x277190: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x277190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x277194: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x277194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277198: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x277198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x27719c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27719cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2771a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2771a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2771a4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2771a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2771a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2771a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2771ac: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x2771acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_2771b0:
    // 0x2771b0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2771B0u;
    SET_GPR_U32(ctx, 31, 0x2771B8u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2771B0u, 0x2771B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771B8u;
label_2771b8:
    // 0x2771b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2771b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2771bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2771bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2771c0: 0x0  nop
    ctx->pc = 0x2771c0u;
    // NOP
    // 0x2771c4: 0x0  nop
    ctx->pc = 0x2771c4u;
    // NOP
    // 0x2771c8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2771c8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2771cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2771ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2771d0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2771d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2771d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2771d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2771d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2771d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2771dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2771DCu;
    {
        const bool branch_taken_0x2771dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2771E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771DCu;
        // 0x2771e0: 0x2702021  addu        $a0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771dc) {
            ctx->pc = 0x2771F4u;
            goto label_2771f4;
        }
    }
    ctx->pc = 0x2771E4u;
    // 0x2771e4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2771e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2771e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2771e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2771ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2771ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2771f0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x2771f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_2771f4:
    // 0x2771f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2771f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2771f8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x2771f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2771fc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2771FCu;
    {
        const bool branch_taken_0x2771fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771FCu;
        // 0x277200: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771fc) {
            ctx->pc = 0x2771B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2771b0;
        }
    }
    ctx->pc = 0x277204u;
    // 0x277204: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x277204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x277208: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x277208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27720c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27720cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x277210: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x277210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x277214: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x277214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x277218: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x277218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27721c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27721cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277220: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x277220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x277224: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x277228: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x277228u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x27722c: 0x0  nop
    ctx->pc = 0x27722cu;
    // NOP
label_277230:
    // 0x277230: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x277230u;
    SET_GPR_U32(ctx, 31, 0x277238u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x277230u, 0x277238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277238u;
label_277238:
    // 0x277238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27723c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27723cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x277240: 0x0  nop
    ctx->pc = 0x277240u;
    // NOP
    // 0x277244: 0x0  nop
    ctx->pc = 0x277244u;
    // NOP
    // 0x277248: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x277248u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27724c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27724cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x277250: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x277250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277254: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x277258: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x277258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27725c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27725Cu;
    {
        const bool branch_taken_0x27725c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27725Cu;
        // 0x277260: 0x2702021  addu        $a0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27725c) {
            ctx->pc = 0x277274u;
            goto label_277274;
        }
    }
    ctx->pc = 0x277264u;
    // 0x277264: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x277264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x277268: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27726c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27726cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x277270: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x277270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_277274:
    // 0x277274: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x277274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x277278: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x277278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27727c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27727Cu;
    {
        const bool branch_taken_0x27727c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27727Cu;
        // 0x277280: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27727c) {
            ctx->pc = 0x277230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_277230;
        }
    }
    ctx->pc = 0x277284u;
    // 0x277284: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x277284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x277288: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x277288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27728c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27728cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x277290: 0x27b30008  addiu       $s3, $sp, 0x8
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x277294: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x277294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x277298: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x277298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27729c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27729cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772a0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2772a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2772a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2772a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2772a8: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x2772a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x2772ac: 0x0  nop
    ctx->pc = 0x2772acu;
    // NOP
label_2772b0:
    // 0x2772b0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2772B0u;
    SET_GPR_U32(ctx, 31, 0x2772B8u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2772B0u, 0x2772B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772B8u;
label_2772b8:
    // 0x2772b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2772b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2772bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2772bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2772c0: 0x0  nop
    ctx->pc = 0x2772c0u;
    // NOP
    // 0x2772c4: 0x0  nop
    ctx->pc = 0x2772c4u;
    // NOP
    // 0x2772c8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2772c8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2772cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2772ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2772d0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2772d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2772d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2772d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2772d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2772d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2772dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2772DCu;
    {
        const bool branch_taken_0x2772dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2772E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772DCu;
        // 0x2772e0: 0x2702021  addu        $a0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772dc) {
            ctx->pc = 0x2772F4u;
            goto label_2772f4;
        }
    }
    ctx->pc = 0x2772E4u;
    // 0x2772e4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2772e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2772e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2772e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2772ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2772ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2772f0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x2772f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_2772f4:
    // 0x2772f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2772f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2772f8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x2772f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2772fc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2772FCu;
    {
        const bool branch_taken_0x2772fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772FCu;
        // 0x277300: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2772fc) {
            ctx->pc = 0x2772B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2772b0;
        }
    }
    ctx->pc = 0x277304u;
    // 0x277304: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x277304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x277308: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x277308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27730c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27730cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x277310: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x277310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x277314: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x277314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x277318: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x277318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27731c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27731cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277320: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x277320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x277324: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x277328: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x277328u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x27732c: 0x0  nop
    ctx->pc = 0x27732cu;
    // NOP
label_277330:
    // 0x277330: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x277330u;
    SET_GPR_U32(ctx, 31, 0x277338u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x277330u, 0x277338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277338u;
label_277338:
    // 0x277338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27733c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27733cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x277340: 0x0  nop
    ctx->pc = 0x277340u;
    // NOP
    // 0x277344: 0x0  nop
    ctx->pc = 0x277344u;
    // NOP
    // 0x277348: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x277348u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27734c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27734cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x277350: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x277350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277354: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x277358: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x277358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27735c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27735Cu;
    {
        const bool branch_taken_0x27735c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27735Cu;
        // 0x277360: 0x2702021  addu        $a0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27735c) {
            ctx->pc = 0x277374u;
            goto label_277374;
        }
    }
    ctx->pc = 0x277364u;
    // 0x277364: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x277364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x277368: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27736c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27736cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x277370: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x277370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_277374:
    // 0x277374: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x277374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x277378: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x277378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27737c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27737Cu;
    {
        const bool branch_taken_0x27737c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27737Cu;
        // 0x277380: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27737c) {
            ctx->pc = 0x277330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_277330;
        }
    }
    ctx->pc = 0x277384u;
    // 0x277384: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x277384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277388: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27738c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27738cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277390: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x277390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277394: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x277394u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277398: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x277398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27739c: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x27739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2773a0: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2773a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2773a4: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2773a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2773a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2773A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2773ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773A8u;
        // 0x2773ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2773A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2773B0u;
}
