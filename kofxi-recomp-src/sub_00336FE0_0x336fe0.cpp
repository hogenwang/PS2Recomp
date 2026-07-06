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

// Function: sub_00336FE0
// Address: 0x336fe0 - 0x337230
void sub_00336FE0_0x336fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336FE0_0x336fe0");
#endif

    switch (ctx->pc) {
        case 0x337068u: goto label_337068;
        case 0x337100u: goto label_337100;
        case 0x337110u: goto label_337110;
        case 0x337130u: goto label_337130;
        case 0x33715cu: goto label_33715c;
        case 0x337194u: goto label_337194;
        case 0x3371b0u: goto label_3371b0;
        case 0x3371ccu: goto label_3371cc;
        case 0x3371dcu: goto label_3371dc;
        case 0x3371f8u: goto label_3371f8;
        case 0x337214u: goto label_337214;
        default: break;
    }

    ctx->pc = 0x336fe0u;

    // 0x336fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336fe4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x336fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x336fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336fec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x336fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x336ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336ff4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x336ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x336ff8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336FF8u;
    {
        const bool branch_taken_0x336ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x336FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FF8u;
        // 0x336ffc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ff8) {
            ctx->pc = 0x337008u;
            goto label_337008;
        }
    }
    ctx->pc = 0x337000u;
    // 0x337000: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x337000u;
    {
        const bool branch_taken_0x337000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337000u;
        // 0x337004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337000) {
            ctx->pc = 0x337218u;
            goto label_337218;
        }
    }
    ctx->pc = 0x337008u;
label_337008:
    // 0x337008: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x337008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33700c: 0x90429738  lbu         $v0, -0x68C8($v0)
    ctx->pc = 0x33700cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940472)));
    // 0x337010: 0x54400081  bnel        $v0, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x337010u;
    {
        const bool branch_taken_0x337010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337010) {
            ctx->pc = 0x337014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337010u;
            // 0x337014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337218u;
            goto label_337218;
        }
    }
    ctx->pc = 0x337018u;
    // 0x337018: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x337018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33701c: 0x8c42d590  lw          $v0, -0x2A70($v0)
    ctx->pc = 0x33701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956432)));
    // 0x337020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337020u;
    {
        const bool branch_taken_0x337020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337020) {
            ctx->pc = 0x337034u;
            goto label_337034;
        }
    }
    ctx->pc = 0x337028u;
    // 0x337028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33702c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x33702Cu;
    {
        const bool branch_taken_0x33702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33702c) {
            ctx->pc = 0x337218u;
            goto label_337218;
        }
    }
    ctx->pc = 0x337034u;
label_337034:
    // 0x337034: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x337034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x337038: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x337038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x33703c: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x33703Cu;
    {
        const bool branch_taken_0x33703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33703c) {
            ctx->pc = 0x337040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33703Cu;
            // 0x337040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337218u;
            goto label_337218;
        }
    }
    ctx->pc = 0x337044u;
    // 0x337044: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x337044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x337048: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x337048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33704c: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x33704cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x337050: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337050u;
    {
        const bool branch_taken_0x337050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x337050) {
            ctx->pc = 0x337060u;
            goto label_337060;
        }
    }
    ctx->pc = 0x337058u;
    // 0x337058: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x337058u;
    {
        const bool branch_taken_0x337058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337058u;
        // 0x33705c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337058) {
            ctx->pc = 0x337218u;
            goto label_337218;
        }
    }
    ctx->pc = 0x337060u;
label_337060:
    // 0x337060: 0xc0cdc8c  jal         func_337230
    ctx->pc = 0x337060u;
    SET_GPR_U32(ctx, 31, 0x337068u);
    ctx->pc = 0x337230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337230u, 0x337060u, 0x337068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337068u;
label_337068:
    // 0x337068: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x337068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33706c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x337070: 0x9042b242  lbu         $v0, -0x4DBE($v0)
    ctx->pc = 0x337070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x337074: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337074u;
    {
        const bool branch_taken_0x337074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x337074) {
            ctx->pc = 0x337084u;
            goto label_337084;
        }
    }
    ctx->pc = 0x33707Cu;
    // 0x33707c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x33707Cu;
    {
        const bool branch_taken_0x33707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33707Cu;
        // 0x337080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33707c) {
            ctx->pc = 0x337218u;
            goto label_337218;
        }
    }
    ctx->pc = 0x337084u;
label_337084:
    // 0x337084: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x337084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x337088: 0x9042b244  lbu         $v0, -0x4DBC($v0)
    ctx->pc = 0x337088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947396)));
    // 0x33708c: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x33708cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x337090: 0x50200061  beql        $at, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x337090u;
    {
        const bool branch_taken_0x337090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337090) {
            ctx->pc = 0x337094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337090u;
            // 0x337094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337218u;
            goto label_337218;
        }
    }
    ctx->pc = 0x337098u;
    // 0x337098: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x337098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33709c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33709cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3370a0: 0x24634bd0  addiu       $v1, $v1, 0x4BD0
    ctx->pc = 0x3370a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19408));
    // 0x3370a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3370a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3370a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3370a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3370ac: 0x400008  jr          $v0
    ctx->pc = 0x3370ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3370B4u: goto label_3370b4;
            case 0x337108u: goto label_337108;
            case 0x337118u: goto label_337118;
            case 0x337138u: goto label_337138;
            case 0x337164u: goto label_337164;
            case 0x337214u: goto label_337214;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3370ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3370B4u;
label_3370b4:
    // 0x3370b4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3370b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3370b8: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x3370b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x3370bc: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x3370bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3370c0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3370C0u;
    {
        const bool branch_taken_0x3370c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370c0) {
            ctx->pc = 0x3370E4u;
            goto label_3370e4;
        }
    }
    ctx->pc = 0x3370C8u;
    // 0x3370c8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3370c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3370cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3370ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3370d0: 0x24634ba0  addiu       $v1, $v1, 0x4BA0
    ctx->pc = 0x3370d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19360));
    // 0x3370d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3370d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3370d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3370d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3370dc: 0x400008  jr          $v0
    ctx->pc = 0x3370DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3370E4u: goto label_3370e4;
            case 0x337214u: goto label_337214;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3370DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3370E4u;
label_3370e4:
    // 0x3370e4: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3370e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3370e8: 0x8c42d918  lw          $v0, -0x26E8($v0)
    ctx->pc = 0x3370e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x3370ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3370ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3370f0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3370F0u;
    {
        const bool branch_taken_0x3370f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370f0) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x3370F8u;
    // 0x3370f8: 0xc04f0fc  jal         func_13C3F0
    ctx->pc = 0x3370F8u;
    SET_GPR_U32(ctx, 31, 0x337100u);
    ctx->pc = 0x3370FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3370F8u;
    // 0x3370fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C3F0u, 0x3370F8u, 0x337100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337100u;
label_337100:
    // 0x337100: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x337100u;
    {
        const bool branch_taken_0x337100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337100) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337108u;
label_337108:
    // 0x337108: 0xc04f0fc  jal         func_13C3F0
    ctx->pc = 0x337108u;
    SET_GPR_U32(ctx, 31, 0x337110u);
    ctx->pc = 0x33710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337108u;
    // 0x33710c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C3F0u, 0x337108u, 0x337110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337110u;
label_337110:
    // 0x337110: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x337110u;
    {
        const bool branch_taken_0x337110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337110) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337118u;
label_337118:
    // 0x337118: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x337118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x33711c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x33711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x337120: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x337120u;
    {
        const bool branch_taken_0x337120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337120) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337128u;
    // 0x337128: 0xc04f0fc  jal         func_13C3F0
    ctx->pc = 0x337128u;
    SET_GPR_U32(ctx, 31, 0x337130u);
    ctx->pc = 0x33712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337128u;
    // 0x33712c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C3F0u, 0x337128u, 0x337130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337130u;
label_337130:
    // 0x337130: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x337130u;
    {
        const bool branch_taken_0x337130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337130) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337138u;
label_337138:
    // 0x337138: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x337138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33713c: 0x8c42e8d8  lw          $v0, -0x1728($v0)
    ctx->pc = 0x33713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961368)));
    // 0x337140: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x337140u;
    {
        const bool branch_taken_0x337140 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x337140) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337148u;
    // 0x337148: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x337148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33714c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33714cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337150: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x337150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x337154: 0xc04f0fc  jal         func_13C3F0
    ctx->pc = 0x337154u;
    SET_GPR_U32(ctx, 31, 0x33715Cu);
    ctx->pc = 0x337158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337154u;
    // 0x337158: 0xac43e8d8  sw          $v1, -0x1728($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961368), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C3F0u, 0x337154u, 0x33715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33715Cu;
label_33715c:
    // 0x33715c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x33715Cu;
    {
        const bool branch_taken_0x33715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33715c) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337164u;
label_337164:
    // 0x337164: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x337164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x337168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x337168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33716c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x33716Cu;
    {
        const bool branch_taken_0x33716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33716c) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337174u;
    // 0x337174: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x337174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x337178: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x337178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x33717c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x337180: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x337180u;
    {
        const bool branch_taken_0x337180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337180) {
            ctx->pc = 0x337184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337180u;
            // 0x337184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3371D4u;
            goto label_3371d4;
        }
    }
    ctx->pc = 0x337188u;
    // 0x337188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33718c: 0xc062a7c  jal         func_18A9F0
    ctx->pc = 0x33718Cu;
    SET_GPR_U32(ctx, 31, 0x337194u);
    ctx->pc = 0x337190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33718Cu;
    // 0x337190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A9F0u, 0x33718Cu, 0x337194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337194u;
label_337194:
    // 0x337194: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x337194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337198: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x337198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33719c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x33719Cu;
    {
        const bool branch_taken_0x33719c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33719c) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x3371A4u;
    // 0x3371a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3371a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3371a8: 0xc04f9fc  jal         func_13E7F0
    ctx->pc = 0x3371A8u;
    SET_GPR_U32(ctx, 31, 0x3371B0u);
    ctx->pc = 0x3371ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371A8u;
    // 0x3371ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E7F0u, 0x3371A8u, 0x3371B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371B0u;
label_3371b0:
    // 0x3371b0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3371B0u;
    {
        const bool branch_taken_0x3371b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3371b0) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x3371B8u;
    // 0x3371b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3371b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3371bc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3371bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3371c0: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x3371c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x3371c4: 0xc0501d0  jal         func_140740
    ctx->pc = 0x3371C4u;
    SET_GPR_U32(ctx, 31, 0x3371CCu);
    ctx->pc = 0x3371C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371C4u;
    // 0x3371c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x3371C4u, 0x3371CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371CCu;
label_3371cc:
    // 0x3371cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3371CCu;
    {
        const bool branch_taken_0x3371cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3371cc) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x3371D4u;
label_3371d4:
    // 0x3371d4: 0xc062a7c  jal         func_18A9F0
    ctx->pc = 0x3371D4u;
    SET_GPR_U32(ctx, 31, 0x3371DCu);
    ctx->pc = 0x3371D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371D4u;
    // 0x3371d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A9F0u, 0x3371D4u, 0x3371DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371DCu;
label_3371dc:
    // 0x3371dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3371dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3371e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3371e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3371e4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3371E4u;
    {
        const bool branch_taken_0x3371e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3371e4) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x3371ECu;
    // 0x3371ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3371ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3371f0: 0xc04f9fc  jal         func_13E7F0
    ctx->pc = 0x3371F0u;
    SET_GPR_U32(ctx, 31, 0x3371F8u);
    ctx->pc = 0x3371F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371F0u;
    // 0x3371f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E7F0u, 0x3371F0u, 0x3371F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371F8u;
label_3371f8:
    // 0x3371f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3371F8u;
    {
        const bool branch_taken_0x3371f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3371f8) {
            ctx->pc = 0x337214u;
            goto label_337214;
        }
    }
    ctx->pc = 0x337200u;
    // 0x337200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337204: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x337204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x337208: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x337208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x33720c: 0xc0501d0  jal         func_140740
    ctx->pc = 0x33720Cu;
    SET_GPR_U32(ctx, 31, 0x337214u);
    ctx->pc = 0x337210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33720Cu;
    // 0x337210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x33720Cu, 0x337214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337214u;
label_337214:
    // 0x337214: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337218:
    // 0x337218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33721c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33721cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337220: 0x3e00008  jr          $ra
    ctx->pc = 0x337220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337220u;
        // 0x337224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337228u;
    // 0x337228: 0x0  nop
    ctx->pc = 0x337228u;
    // NOP
    // 0x33722c: 0x0  nop
    ctx->pc = 0x33722cu;
    // NOP
}
