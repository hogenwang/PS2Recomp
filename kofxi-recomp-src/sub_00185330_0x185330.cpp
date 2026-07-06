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

// Function: sub_00185330
// Address: 0x185330 - 0x185400
void sub_00185330_0x185330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185330_0x185330");
#endif

    switch (ctx->pc) {
        case 0x1853b8u: goto label_1853b8;
        case 0x1853c4u: goto label_1853c4;
        default: break;
    }

    ctx->pc = 0x185330u;

    // 0x185330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185334: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x185338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18533c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x185340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185344: 0x2463db53  addiu       $v1, $v1, -0x24AD
    ctx->pc = 0x185344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957907));
    // 0x185348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18534c: 0x2442dbc8  addiu       $v0, $v0, -0x2438
    ctx->pc = 0x18534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958024));
    // 0x185350: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x185350u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185354: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x185354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x185358: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x185358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18535c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18535cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185360: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x185360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x185364: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x185364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18536c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x185370: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x185370u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185374: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185378: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x185378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18537c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185380u;
    {
        const bool branch_taken_0x185380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185380u;
        // 0x185384: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185380) {
            ctx->pc = 0x185390u;
            goto label_185390;
        }
    }
    ctx->pc = 0x185388u;
    // 0x185388: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x185388u;
    {
        const bool branch_taken_0x185388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185388u;
        // 0x18538c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185388) {
            ctx->pc = 0x1853ECu;
            goto label_1853ec;
        }
    }
    ctx->pc = 0x185390u;
label_185390:
    // 0x185390: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x185390u;
    {
        const bool branch_taken_0x185390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x185390) {
            ctx->pc = 0x185394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185390u;
            // 0x185394: 0x8e030498  lw          $v1, 0x498($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1853A0u;
            goto label_1853a0;
        }
    }
    ctx->pc = 0x185398u;
    // 0x185398: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x185398u;
    {
        const bool branch_taken_0x185398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185398u;
        // 0x18539c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185398) {
            ctx->pc = 0x1853ECu;
            goto label_1853ec;
        }
    }
    ctx->pc = 0x1853A0u;
label_1853a0:
    // 0x1853a0: 0x3c020180  lui         $v0, 0x180
    ctx->pc = 0x1853a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)384 << 16));
    // 0x1853a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1853a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1853a8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1853A8u;
    {
        const bool branch_taken_0x1853a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1853a8) {
            ctx->pc = 0x1853ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1853A8u;
            // 0x1853ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1853ECu;
            goto label_1853ec;
        }
    }
    ctx->pc = 0x1853B0u;
    // 0x1853b0: 0xc061500  jal         func_185400
    ctx->pc = 0x1853B0u;
    SET_GPR_U32(ctx, 31, 0x1853B8u);
    ctx->pc = 0x1853B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853B0u;
    // 0x1853b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185400u, 0x1853B0u, 0x1853B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853B8u;
label_1853b8:
    // 0x1853b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1853b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1853bc: 0xc061508  jal         func_185420
    ctx->pc = 0x1853BCu;
    SET_GPR_U32(ctx, 31, 0x1853C4u);
    ctx->pc = 0x1853C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853BCu;
    // 0x1853c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185420u, 0x1853BCu, 0x1853C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853C4u;
label_1853c4:
    // 0x1853c4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1853c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1853c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1853c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1853cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1853ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1853d0: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x1853d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x1853d4: 0x3c03fe7f  lui         $v1, 0xFE7F
    ctx->pc = 0x1853d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65151 << 16));
    // 0x1853d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1853d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1853dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1853dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1853e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1853e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1853e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1853e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1853e8: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x1853e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
label_1853ec:
    // 0x1853ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1853ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1853f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1853f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1853f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1853f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1853f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1853F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1853FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853F8u;
        // 0x1853fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1853F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185400u;
}
