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

// Function: sub_0018E020
// Address: 0x18e020 - 0x18e180
void sub_0018E020_0x18e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E020_0x18e020");
#endif

    switch (ctx->pc) {
        case 0x18e04cu: goto label_18e04c;
        default: break;
    }

    ctx->pc = 0x18e020u;

    // 0x18e020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e024: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18e024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18e028: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18e028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18e02c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e034: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18e034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e03c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18e03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e044: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18E044u;
    SET_GPR_U32(ctx, 31, 0x18E04Cu);
    ctx->pc = 0x18E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E044u;
    // 0x18e048: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE30u, 0x18E044u, 0x18E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E04Cu;
label_18e04c:
    // 0x18e04c: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x18E04Cu;
    {
        const bool branch_taken_0x18e04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e04c) {
            ctx->pc = 0x18E050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E04Cu;
            // 0x18e050: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E160u;
            goto label_18e160;
        }
    }
    ctx->pc = 0x18E054u;
    // 0x18e054: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x18e054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18e058: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x18e058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18e05c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18e060: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x18e060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x18e064: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18e064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18e068: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18e068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18e06c: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x18E06Cu;
    {
        const bool branch_taken_0x18e06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E06Cu;
        // 0x18e070: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e06c) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E074u;
    // 0x18e074: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18e078: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x18e078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x18e07c: 0x2463e820  addiu       $v1, $v1, -0x17E0
    ctx->pc = 0x18e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961184));
    // 0x18e080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e084: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e088: 0x400008  jr          $v0
    ctx->pc = 0x18E088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E090u: goto label_18e090;
            case 0x18E0A0u: goto label_18e0a0;
            case 0x18E0B0u: goto label_18e0b0;
            case 0x18E0C0u: goto label_18e0c0;
            case 0x18E0D0u: goto label_18e0d0;
            case 0x18E0E0u: goto label_18e0e0;
            case 0x18E0F0u: goto label_18e0f0;
            case 0x18E100u: goto label_18e100;
            case 0x18E110u: goto label_18e110;
            case 0x18E120u: goto label_18e120;
            case 0x18E130u: goto label_18e130;
            case 0x18E138u: goto label_18e138;
            case 0x18E140u: goto label_18e140;
            case 0x18E148u: goto label_18e148;
            case 0x18E150u: goto label_18e150;
            case 0x18E158u: goto label_18e158;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E088u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18E090u;
label_18e090:
    // 0x18e090: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x18e090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x18e094: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e094u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e098: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18E098u;
    {
        const bool branch_taken_0x18e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E098u;
        // 0x18e09c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e098) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E0A0u;
label_18e0a0:
    // 0x18e0a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x18e0a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e0a4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e0a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e0a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18E0A8u;
    {
        const bool branch_taken_0x18e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0A8u;
        // 0x18e0ac: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0a8) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E0B0u;
label_18e0b0:
    // 0x18e0b0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x18e0b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x18e0b4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e0b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e0b8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x18E0B8u;
    {
        const bool branch_taken_0x18e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0B8u;
        // 0x18e0bc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0b8) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E0C0u;
label_18e0c0:
    // 0x18e0c0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x18e0c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18e0c4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e0c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e0c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18E0C8u;
    {
        const bool branch_taken_0x18e0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0C8u;
        // 0x18e0cc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0c8) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E0D0u;
label_18e0d0:
    // 0x18e0d0: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x18e0d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x18e0d4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e0d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e0d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18E0D8u;
    {
        const bool branch_taken_0x18e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0D8u;
        // 0x18e0dc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0d8) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E0E0u;
label_18e0e0:
    // 0x18e0e0: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x18e0e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18e0e4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e0e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e0e8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18E0E8u;
    {
        const bool branch_taken_0x18e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0E8u;
        // 0x18e0ec: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0e8) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E0F0u;
label_18e0f0:
    // 0x18e0f0: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x18e0f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x18e0f4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e0f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e0f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x18E0F8u;
    {
        const bool branch_taken_0x18e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0F8u;
        // 0x18e0fc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0f8) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E100u;
label_18e100:
    // 0x18e100: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x18e100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x18e104: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e108: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18E108u;
    {
        const bool branch_taken_0x18e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E108u;
        // 0x18e10c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e108) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E110u;
label_18e110:
    // 0x18e110: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x18e110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x18e114: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e118: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18E118u;
    {
        const bool branch_taken_0x18e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E118u;
        // 0x18e11c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e118) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E120u;
label_18e120:
    // 0x18e120: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x18e120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e124: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18e124u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18e128: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18E128u;
    {
        const bool branch_taken_0x18e128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E128u;
        // 0x18e12c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e128) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E130u;
label_18e130:
    // 0x18e130: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18E130u;
    {
        const bool branch_taken_0x18e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E130u;
        // 0x18e134: 0x8090000b  lb          $s0, 0xB($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e130) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E138u;
label_18e138:
    // 0x18e138: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18E138u;
    {
        const bool branch_taken_0x18e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E138u;
        // 0x18e13c: 0x8090000a  lb          $s0, 0xA($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e138) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E140u;
label_18e140:
    // 0x18e140: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18E140u;
    {
        const bool branch_taken_0x18e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E140u;
        // 0x18e144: 0x8090000d  lb          $s0, 0xD($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e140) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E148u;
label_18e148:
    // 0x18e148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E148u;
    {
        const bool branch_taken_0x18e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E148u;
        // 0x18e14c: 0x8090000c  lb          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e148) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E150u;
label_18e150:
    // 0x18e150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E150u;
    {
        const bool branch_taken_0x18e150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E150u;
        // 0x18e154: 0x8490000e  lh          $s0, 0xE($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e150) {
            ctx->pc = 0x18E15Cu;
            goto label_18e15c;
        }
    }
    ctx->pc = 0x18E158u;
label_18e158:
    // 0x18e158: 0x84900010  lh          $s0, 0x10($a0)
    ctx->pc = 0x18e158u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_18e15c:
    // 0x18e15c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e160:
    // 0x18e160: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18e160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e16c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e170: 0x3e00008  jr          $ra
    ctx->pc = 0x18E170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E170u;
        // 0x18e174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E178u;
    // 0x18e178: 0x0  nop
    ctx->pc = 0x18e178u;
    // NOP
    // 0x18e17c: 0x0  nop
    ctx->pc = 0x18e17cu;
    // NOP
    if (ctx->pc == 0x18e17cu) { ctx->pc = 0x18e180u; }
}
