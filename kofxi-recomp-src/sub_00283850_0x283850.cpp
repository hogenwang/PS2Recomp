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

// Function: sub_00283850
// Address: 0x283850 - 0x283a50
void sub_00283850_0x283850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283850_0x283850");
#endif

    switch (ctx->pc) {
        case 0x2838b4u: goto label_2838b4;
        case 0x2838c8u: goto label_2838c8;
        case 0x2838ecu: goto label_2838ec;
        case 0x283910u: goto label_283910;
        case 0x283958u: goto label_283958;
        default: break;
    }

    ctx->pc = 0x283850u;

    // 0x283850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x283850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x283854: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x283854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x283858: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x283858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28385c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28385cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283860: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x283860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x283864: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283868: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x283868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28386c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283874: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x283874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x283878: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x283878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x28387c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28387Cu;
    {
        const bool branch_taken_0x28387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28387c) {
            ctx->pc = 0x283880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28387Cu;
            // 0x283880: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28388Cu;
            goto label_28388c;
        }
    }
    ctx->pc = 0x283884u;
    // 0x283884: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x283884u;
    {
        const bool branch_taken_0x283884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283884u;
        // 0x283888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283884) {
            ctx->pc = 0x283A2Cu;
            goto label_283a2c;
        }
    }
    ctx->pc = 0x28388Cu;
label_28388c:
    // 0x28388c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x283890: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x283890u;
    {
        const bool branch_taken_0x283890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283890u;
        // 0x283894: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283890) {
            ctx->pc = 0x283A2Cu;
            goto label_283a2c;
        }
    }
    ctx->pc = 0x283898u;
    // 0x283898: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x283898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28389c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x28389Cu;
    {
        const bool branch_taken_0x28389c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2838A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28389Cu;
        // 0x2838a0: 0x24100028  addiu       $s0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28389c) {
            ctx->pc = 0x2838D0u;
            goto label_2838d0;
        }
    }
    ctx->pc = 0x2838A4u;
    // 0x2838a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2838a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2838a8: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x2838a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2838ac: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2838ACu;
    SET_GPR_U32(ctx, 31, 0x2838B4u);
    ctx->pc = 0x2838B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838ACu;
    // 0x2838b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2838ACu, 0x2838B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838B4u;
label_2838b4:
    // 0x2838b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2838b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2838b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2838b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2838bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2838bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2838c0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2838C0u;
    SET_GPR_U32(ctx, 31, 0x2838C8u);
    ctx->pc = 0x2838C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838C0u;
    // 0x2838c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2838C0u, 0x2838C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838C8u;
label_2838c8:
    // 0x2838c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2838C8u;
    {
        const bool branch_taken_0x2838c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838c8) {
            ctx->pc = 0x283910u;
            goto label_283910;
        }
    }
    ctx->pc = 0x2838D0u;
label_2838d0:
    // 0x2838d0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2838d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2838d4: 0x2700018  mult        $zero, $s3, $s0
    ctx->pc = 0x2838d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2838d8: 0x2812  mflo        $a1
    ctx->pc = 0x2838d8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2838dc: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x2838dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2838e0: 0x3012  mflo        $a2
    ctx->pc = 0x2838e0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2838e4: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x2838E4u;
    SET_GPR_U32(ctx, 31, 0x2838ECu);
    ctx->pc = 0x2838E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838E4u;
    // 0x2838e8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3000u, 0x2838E4u, 0x2838ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2838ECu;
label_2838ec:
    // 0x2838ec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2838ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2838f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2838f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2838f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2838f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2838f8: 0x2643023  subu        $a2, $s3, $a0
    ctx->pc = 0x2838f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2838fc: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x2838fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x283900: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x283900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x283904: 0x3012  mflo        $a2
    ctx->pc = 0x283904u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x283908: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x283908u;
    SET_GPR_U32(ctx, 31, 0x283910u);
    ctx->pc = 0x28390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283908u;
    // 0x28390c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x283908u, 0x283910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283910u;
label_283910:
    // 0x283910: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x283910u;
    {
        const bool branch_taken_0x283910 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x283910) {
            ctx->pc = 0x283914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283910u;
            // 0x283914: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283920u;
            goto label_283920;
        }
    }
    ctx->pc = 0x283918u;
    // 0x283918: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x283918u;
    {
        const bool branch_taken_0x283918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283918u;
        // 0x28391c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283918) {
            ctx->pc = 0x283A2Cu;
            goto label_283a2c;
        }
    }
    ctx->pc = 0x283920u;
label_283920:
    // 0x283920: 0x50b10040  beql        $a1, $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x283920u;
    {
        const bool branch_taken_0x283920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x283920) {
            ctx->pc = 0x283924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283920u;
            // 0x283924: 0xae510008  sw          $s1, 0x8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283A24u;
            goto label_283a24;
        }
    }
    ctx->pc = 0x283928u;
    // 0x283928: 0x1280003d  beqz        $s4, . + 4 + (0x3D << 2)
    ctx->pc = 0x283928u;
    {
        const bool branch_taken_0x283928 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283928u;
        // 0x28392c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283928) {
            ctx->pc = 0x283A20u;
            goto label_283a20;
        }
    }
    ctx->pc = 0x283930u;
    // 0x283930: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x283930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x283934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283938: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x283938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28393c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x28393Cu;
    {
        const bool branch_taken_0x28393c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28393Cu;
        // 0x283940: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28393c) {
            ctx->pc = 0x283A20u;
            goto label_283a20;
        }
    }
    ctx->pc = 0x283944u;
    // 0x283944: 0x3c08cccc  lui         $t0, 0xCCCC
    ctx->pc = 0x283944u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52428 << 16));
    // 0x283948: 0x240b0028  addiu       $t3, $zero, 0x28
    ctx->pc = 0x283948u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28394c: 0x3508cccd  ori         $t0, $t0, 0xCCCD
    ctx->pc = 0x28394cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52429);
    // 0x283950: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x283950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283954: 0x0  nop
    ctx->pc = 0x283954u;
    // NOP
label_283958:
    // 0x283958: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x283958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x28395c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x28395cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x283960: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283960u;
    {
        const bool branch_taken_0x283960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283960u;
        // 0x283964: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283960) {
            ctx->pc = 0x283990u;
            goto label_283990;
        }
    }
    ctx->pc = 0x283968u;
    // 0x283968: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x283968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28396c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28396Cu;
    {
        const bool branch_taken_0x28396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28396Cu;
        // 0x283970: 0xc91018  mult        $v0, $a2, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28396c) {
            ctx->pc = 0x283994u;
            goto label_283994;
        }
    }
    ctx->pc = 0x283974u;
    // 0x283974: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x283974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x283978: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x283978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28397c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x28397cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x283980: 0x4b2018  mult        $a0, $v0, $t3
    ctx->pc = 0x283980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x283984: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x283984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x283988: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x283988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x28398c: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x28398cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_283990:
    // 0x283990: 0xc91018  mult        $v0, $a2, $t1
    ctx->pc = 0x283990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_283994:
    // 0x283994: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x283994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x283998: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x283998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x28399c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x28399cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2839a0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2839A0u;
    {
        const bool branch_taken_0x2839a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2839a0) {
            ctx->pc = 0x2839A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839A0u;
            // 0x2839a4: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2839D0u;
            goto label_2839d0;
        }
    }
    ctx->pc = 0x2839A8u;
    // 0x2839a8: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x2839a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2839ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2839ACu;
    {
        const bool branch_taken_0x2839ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2839ac) {
            ctx->pc = 0x2839B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839ACu;
            // 0x2839b0: 0x24090028  addiu       $t1, $zero, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2839D0u;
            goto label_2839d0;
        }
    }
    ctx->pc = 0x2839B4u;
    // 0x2839b4: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x2839b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2839b8: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x2839b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2839bc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2839bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2839c0: 0x496018  mult        $t4, $v0, $t1
    ctx->pc = 0x2839c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2839c4: 0x1911821  addu        $v1, $t4, $s1
    ctx->pc = 0x2839c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x2839c8: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2839c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2839cc: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x2839ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2839d0:
    // 0x2839d0: 0xc91018  mult        $v0, $a2, $t1
    ctx->pc = 0x2839d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2839d4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2839d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2839d8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2839d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2839dc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2839dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2839e0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2839E0u;
    {
        const bool branch_taken_0x2839e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2839e0) {
            ctx->pc = 0x2839E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839E0u;
            // 0x2839e4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283A10u;
            goto label_283a10;
        }
    }
    ctx->pc = 0x2839E8u;
    // 0x2839e8: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x2839e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2839ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2839ECu;
    {
        const bool branch_taken_0x2839ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2839ec) {
            ctx->pc = 0x2839F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839ECu;
            // 0x2839f0: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283A10u;
            goto label_283a10;
        }
    }
    ctx->pc = 0x2839F4u;
    // 0x2839f4: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x2839f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2839f8: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x2839f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2839fc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2839fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x283a00: 0x496018  mult        $t4, $v0, $t1
    ctx->pc = 0x283a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x283a04: 0x1911821  addu        $v1, $t4, $s1
    ctx->pc = 0x283a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x283a08: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x283a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x283a0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x283a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_283a10:
    // 0x283a10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x283a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x283a14: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x283a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x283a18: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x283A18u;
    {
        const bool branch_taken_0x283a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A18u;
        // 0x283a1c: 0x24e70028  addiu       $a3, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a18) {
            ctx->pc = 0x283958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283958;
        }
    }
    ctx->pc = 0x283A20u;
label_283a20:
    // 0x283a20: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x283a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_283a24:
    // 0x283a24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a28: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x283a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_283a2c:
    // 0x283a2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x283a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283a30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x283a30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283a34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x283a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283a38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x283a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283a3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283a44: 0x3e00008  jr          $ra
    ctx->pc = 0x283A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A44u;
        // 0x283a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283A4Cu;
    // 0x283a4c: 0x0  nop
    ctx->pc = 0x283a4cu;
    // NOP
}
