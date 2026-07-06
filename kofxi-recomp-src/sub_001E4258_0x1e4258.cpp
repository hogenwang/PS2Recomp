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

// Function: sub_001E4258
// Address: 0x1e4258 - 0x1e45e8
void sub_001E4258_0x1e4258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4258_0x1e4258");
#endif

    switch (ctx->pc) {
        case 0x1e426cu: goto label_1e426c;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e42b4u: goto label_1e42b4;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42f8u: goto label_1e42f8;
        case 0x1e431cu: goto label_1e431c;
        case 0x1e4350u: goto label_1e4350;
        case 0x1e43d4u: goto label_1e43d4;
        case 0x1e4410u: goto label_1e4410;
        case 0x1e4424u: goto label_1e4424;
        case 0x1e4464u: goto label_1e4464;
        case 0x1e4498u: goto label_1e4498;
        case 0x1e44ccu: goto label_1e44cc;
        case 0x1e44e4u: goto label_1e44e4;
        case 0x1e4500u: goto label_1e4500;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4568u: goto label_1e4568;
        case 0x1e459cu: goto label_1e459c;
        case 0x1e45b4u: goto label_1e45b4;
        case 0x1e45d0u: goto label_1e45d0;
        default: break;
    }

    ctx->pc = 0x1e4258u;

    // 0x1e4258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e425c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e4260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e4264: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4264u;
    SET_GPR_U32(ctx, 31, 0x1E426Cu);
    ctx->pc = 0x1E4268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4264u;
    // 0x1e4268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A40u, 0x1E4264u, 0x1E426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E426Cu;
label_1e426c:
    // 0x1e426c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e426cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e427c: 0x8080666  j           func_201998
    ctx->pc = 0x1E427Cu;
    ctx->pc = 0x1E4280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E427Cu;
    // 0x1e4280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201998u, 0x1E427Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E4284u;
    // 0x1e4284: 0x0  nop
    ctx->pc = 0x1e4284u;
    // NOP
    // 0x1e4288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e428c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e4290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e4294: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E4294u;
    SET_GPR_U32(ctx, 31, 0x1E429Cu);
    ctx->pc = 0x1E4298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4294u;
    // 0x1e4298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E4294u, 0x1E429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E429Cu;
label_1e429c:
    // 0x1e429c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e429cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e42a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e42a4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E42A4u;
    {
        const bool branch_taken_0x1e42a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42A4u;
        // 0x1e42a8: 0x2484dd28  addiu       $a0, $a0, -0x22D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42a4) {
            ctx->pc = 0x1E42C0u;
            goto label_1e42c0;
        }
    }
    ctx->pc = 0x1E42ACu;
    // 0x1e42ac: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E42ACu;
    SET_GPR_U32(ctx, 31, 0x1E42B4u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E42ACu, 0x1E42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42B4u;
label_1e42b4:
    // 0x1e42b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E42B4u;
    {
        const bool branch_taken_0x1e42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42B4u;
        // 0x1e42b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42b4) {
            ctx->pc = 0x1E42CCu;
            goto label_1e42cc;
        }
    }
    ctx->pc = 0x1E42BCu;
    // 0x1e42bc: 0x0  nop
    ctx->pc = 0x1e42bcu;
    // NOP
label_1e42c0:
    // 0x1e42c0: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E42C0u;
    SET_GPR_U32(ctx, 31, 0x1E42C8u);
    ctx->pc = 0x1E42C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42C0u;
    // 0x1e42c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A40u, 0x1E42C0u, 0x1E42C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42C8u;
label_1e42c8:
    // 0x1e42c8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1e42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1e42cc:
    // 0x1e42cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e42ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e42d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e42d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e42d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E42D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42D4u;
        // 0x1e42d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E42D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E42DCu;
    // 0x1e42dc: 0x0  nop
    ctx->pc = 0x1e42dcu;
    // NOP
    // 0x1e42e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e42e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e42e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e42e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e42e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e42e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e42ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e42ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e42f0: 0x80790ea  j           func_1E43A8
    ctx->pc = 0x1E42F0u;
    ctx->pc = 0x1E42F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42F0u;
    // 0x1e42f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E43A8u;
    goto label_1e43a8;
    ctx->pc = 0x1E42F8u;
label_1e42f8:
    // 0x1e42f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e42f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e42fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e42fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4308: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e4308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e430c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e4310: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e4310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e4314: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E4314u;
    SET_GPR_U32(ctx, 31, 0x1E431Cu);
    ctx->pc = 0x1E4318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4314u;
    // 0x1e4318: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E4314u, 0x1E431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E431Cu;
label_1e431c:
    // 0x1e431c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4320: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4320u;
    {
        const bool branch_taken_0x1e4320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4320u;
        // 0x1e4324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4320) {
            ctx->pc = 0x1E4348u;
            goto label_1e4348;
        }
    }
    ctx->pc = 0x1E4328u;
    // 0x1e4328: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e432c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e432cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4334: 0x2484dd60  addiu       $a0, $a0, -0x22A0
    ctx->pc = 0x1e4334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958432));
    // 0x1e4338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e4338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e433c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e433cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4340: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E4340u;
    ctx->pc = 0x1E4344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4340u;
    // 0x1e4344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E4348u;
label_1e4348:
    // 0x1e4348: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4348u;
    SET_GPR_U32(ctx, 31, 0x1E4350u);
    ctx->pc = 0x1E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A40u, 0x1E4348u, 0x1E4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4350u;
label_1e4350:
    // 0x1e4350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4354: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e4354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e4358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e435c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e435cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4368: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e4368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e436c: 0x808066e  j           func_2019B8
    ctx->pc = 0x1E436Cu;
    ctx->pc = 0x1E4370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E436Cu;
    // 0x1e4370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2019B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2019B8u, 0x1E436Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E4374u;
    // 0x1e4374: 0x0  nop
    ctx->pc = 0x1e4374u;
    // NOP
    // 0x1e4378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e437c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e437cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4388: 0x80790ea  j           func_1E43A8
    ctx->pc = 0x1E4388u;
    ctx->pc = 0x1E438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4388u;
    // 0x1e438c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E43A8u;
    goto label_1e43a8;
    ctx->pc = 0x1E4390u;
    // 0x1e4390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e439c: 0x80790be  j           func_1E42F8
    ctx->pc = 0x1E439Cu;
    ctx->pc = 0x1E43A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E439Cu;
    // 0x1e43a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E42F8u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1e42f8;
    ctx->pc = 0x1E43A4u;
    // 0x1e43a4: 0x0  nop
    ctx->pc = 0x1e43a4u;
    // NOP
label_1e43a8:
    // 0x1e43a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e43a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e43ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e43acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e43b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e43b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e43b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e43b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e43b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e43bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e43bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e43c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e43c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e43c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e43c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e43cc: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E43CCu;
    SET_GPR_U32(ctx, 31, 0x1E43D4u);
    ctx->pc = 0x1E43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43CCu;
    // 0x1e43d0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E43CCu, 0x1E43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43D4u;
label_1e43d4:
    // 0x1e43d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e43d8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E43D8u;
    {
        const bool branch_taken_0x1e43d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43D8u;
        // 0x1e43dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43d8) {
            ctx->pc = 0x1E4408u;
            goto label_1e4408;
        }
    }
    ctx->pc = 0x1E43E0u;
    // 0x1e43e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e43e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e43e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e43e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e43e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e43e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e43ec: 0x2484dd98  addiu       $a0, $a0, -0x2268
    ctx->pc = 0x1e43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958488));
    // 0x1e43f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e43f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e43f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e43f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e43f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e43f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e43fc: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E43FCu;
    ctx->pc = 0x1E4400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43FCu;
    // 0x1e4400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E4404u;
    // 0x1e4404: 0x0  nop
    ctx->pc = 0x1e4404u;
    // NOP
label_1e4408:
    // 0x1e4408: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4408u;
    SET_GPR_U32(ctx, 31, 0x1E4410u);
    ctx->pc = 0x1E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A40u, 0x1E4408u, 0x1E4410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4410u;
label_1e4410:
    // 0x1e4410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e4414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4418: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e4418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e441c: 0xc08066a  jal         func_2019A8
    ctx->pc = 0x1E441Cu;
    SET_GPR_U32(ctx, 31, 0x1E4424u);
    ctx->pc = 0x1E4420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E441Cu;
    // 0x1e4420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2019A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2019A8u, 0x1E441Cu, 0x1E4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4424u;
label_1e4424:
    // 0x1e4424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4428: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e442c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e442cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e4438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e443c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e443cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4440: 0x8080674  j           func_2019D0
    ctx->pc = 0x1E4440u;
    ctx->pc = 0x1E4444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4440u;
    // 0x1e4444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2019D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2019D0u, 0x1E4440u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E4448u;
    // 0x1e4448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e444c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4454: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e445c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E445Cu;
    SET_GPR_U32(ctx, 31, 0x1E4464u);
    ctx->pc = 0x1E4460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E445Cu;
    // 0x1e4460: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E445Cu, 0x1E4464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4464u;
label_1e4464:
    // 0x1e4464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4468: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4468u;
    {
        const bool branch_taken_0x1e4468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4468u;
        // 0x1e446c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4468) {
            ctx->pc = 0x1E4490u;
            goto label_1e4490;
        }
    }
    ctx->pc = 0x1E4470u;
    // 0x1e4470: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e447c: 0x2484ddd0  addiu       $a0, $a0, -0x2230
    ctx->pc = 0x1e447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958544));
    // 0x1e4480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4484: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E4484u;
    ctx->pc = 0x1E4488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4484u;
    // 0x1e4488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E448Cu;
    // 0x1e448c: 0x0  nop
    ctx->pc = 0x1e448cu;
    // NOP
label_1e4490:
    // 0x1e4490: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4490u;
    SET_GPR_U32(ctx, 31, 0x1E4498u);
    ctx->pc = 0x1E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A40u, 0x1E4490u, 0x1E4498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4498u;
label_1e4498:
    // 0x1e4498: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e449c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e449cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e44a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e44a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e44a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e44a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e44a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e44a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e44ac: 0x80806c4  j           func_201B10
    ctx->pc = 0x1E44ACu;
    ctx->pc = 0x1E44B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44ACu;
    // 0x1e44b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B10u, 0x1E44ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E44B4u;
    // 0x1e44b4: 0x0  nop
    ctx->pc = 0x1e44b4u;
    // NOP
    // 0x1e44b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e44b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e44bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e44bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e44c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e44c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e44c4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E44C4u;
    SET_GPR_U32(ctx, 31, 0x1E44CCu);
    ctx->pc = 0x1E44C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44C4u;
    // 0x1e44c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E44C4u, 0x1E44CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E44CCu;
label_1e44cc:
    // 0x1e44cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e44d0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E44D0u;
    {
        const bool branch_taken_0x1e44d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44D0u;
        // 0x1e44d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44d0) {
            ctx->pc = 0x1E44F8u;
            goto label_1e44f8;
        }
    }
    ctx->pc = 0x1E44D8u;
    // 0x1e44d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e44dc: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E44DCu;
    SET_GPR_U32(ctx, 31, 0x1E44E4u);
    ctx->pc = 0x1E44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44DCu;
    // 0x1e44e0: 0x2484de08  addiu       $a0, $a0, -0x21F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E44DCu, 0x1E44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E44E4u;
label_1e44e4:
    // 0x1e44e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e44e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e44e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e44e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e44ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e44ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e44f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E44F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44F0u;
        // 0x1e44f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E44F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E44F8u;
label_1e44f8:
    // 0x1e44f8: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E44F8u;
    SET_GPR_U32(ctx, 31, 0x1E4500u);
    ctx->pc = 0x1E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A40u, 0x1E44F8u, 0x1E4500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4500u;
label_1e4500:
    // 0x1e4500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4508: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e4508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e450c: 0x80806c6  j           func_201B18
    ctx->pc = 0x1E450Cu;
    ctx->pc = 0x1E4510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E450Cu;
    // 0x1e4510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B18u, 0x1E450Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E4514u;
    // 0x1e4514: 0x0  nop
    ctx->pc = 0x1e4514u;
    // NOP
    // 0x1e4518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e451c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e452c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E452Cu;
    SET_GPR_U32(ctx, 31, 0x1E4534u);
    ctx->pc = 0x1E4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E452Cu;
    // 0x1e4530: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E452Cu, 0x1E4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4534u;
label_1e4534:
    // 0x1e4534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4538: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4538u;
    {
        const bool branch_taken_0x1e4538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4538u;
        // 0x1e453c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4538) {
            ctx->pc = 0x1E4560u;
            goto label_1e4560;
        }
    }
    ctx->pc = 0x1E4540u;
    // 0x1e4540: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e454c: 0x2484de40  addiu       $a0, $a0, -0x21C0
    ctx->pc = 0x1e454cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958656));
    // 0x1e4550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4554: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E4554u;
    ctx->pc = 0x1E4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4554u;
    // 0x1e4558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E455Cu;
    // 0x1e455c: 0x0  nop
    ctx->pc = 0x1e455cu;
    // NOP
label_1e4560:
    // 0x1e4560: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4560u;
    SET_GPR_U32(ctx, 31, 0x1E4568u);
    ctx->pc = 0x1E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A40u, 0x1E4560u, 0x1E4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4568u;
label_1e4568:
    // 0x1e4568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e456c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e456cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e457c: 0x80806c8  j           func_201B20
    ctx->pc = 0x1E457Cu;
    ctx->pc = 0x1E4580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E457Cu;
    // 0x1e4580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B20u, 0x1E457Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E4584u;
    // 0x1e4584: 0x0  nop
    ctx->pc = 0x1e4584u;
    // NOP
    // 0x1e4588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e458c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e458cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e4590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e4594: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E4594u;
    SET_GPR_U32(ctx, 31, 0x1E459Cu);
    ctx->pc = 0x1E4598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4594u;
    // 0x1e4598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E4594u, 0x1E459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E459Cu;
label_1e459c:
    // 0x1e459c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e45a0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E45A0u;
    {
        const bool branch_taken_0x1e45a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45A0u;
        // 0x1e45a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45a0) {
            ctx->pc = 0x1E45C8u;
            goto label_1e45c8;
        }
    }
    ctx->pc = 0x1E45A8u;
    // 0x1e45a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e45a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e45ac: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E45ACu;
    SET_GPR_U32(ctx, 31, 0x1E45B4u);
    ctx->pc = 0x1E45B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45ACu;
    // 0x1e45b0: 0x2484de78  addiu       $a0, $a0, -0x2188 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E45ACu, 0x1E45B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45B4u;
label_1e45b4:
    // 0x1e45b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e45b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e45b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e45bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e45bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e45c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E45C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C0u;
        // 0x1e45c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E45C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E45C8u;
label_1e45c8:
    // 0x1e45c8: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E45C8u;
    SET_GPR_U32(ctx, 31, 0x1E45D0u);
    ctx->pc = 0x1E3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A40u, 0x1E45C8u, 0x1E45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45D0u;
label_1e45d0:
    // 0x1e45d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e45d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e45d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e45d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e45d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e45dc: 0x80806ca  j           func_201B28
    ctx->pc = 0x1E45DCu;
    ctx->pc = 0x1E45E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45DCu;
    // 0x1e45e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B28u, 0x1E45DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E45E4u;
    // 0x1e45e4: 0x0  nop
    ctx->pc = 0x1e45e4u;
    // NOP
    if (ctx->pc == 0x1e45e4u) { ctx->pc = 0x1e45e8u; }
}
