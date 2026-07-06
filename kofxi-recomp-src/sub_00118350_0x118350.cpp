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

// Function: sub_00118350
// Address: 0x118350 - 0x118400
void sub_00118350_0x118350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118350_0x118350");
#endif

    switch (ctx->pc) {
        case 0x1183b8u: goto label_1183b8;
        case 0x1183dcu: goto label_1183dc;
        case 0x1183e4u: goto label_1183e4;
        default: break;
    }

    ctx->pc = 0x118350u;

    // 0x118350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118354: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x118354u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x118358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11835c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118360: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x118360u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x118364: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118364u;
    {
        const bool branch_taken_0x118364 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x118368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118364u;
        // 0x118368: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118364) {
            ctx->pc = 0x11837Cu;
            goto label_11837c;
        }
    }
    ctx->pc = 0x11836Cu;
    // 0x11836c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11836cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118370: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x118370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x118374: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118374u;
    {
        const bool branch_taken_0x118374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x118374) {
            ctx->pc = 0x118378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118374u;
            // 0x118378: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118388u;
            goto label_118388;
        }
    }
    ctx->pc = 0x11837Cu;
label_11837c:
    // 0x11837c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118380: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x118380u;
    {
        const bool branch_taken_0x118380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118380u;
        // 0x118384: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118380) {
            ctx->pc = 0x1183E8u;
            goto label_1183e8;
        }
    }
    ctx->pc = 0x118388u;
label_118388:
    // 0x118388: 0x24429d48  addiu       $v0, $v0, -0x62B8
    ctx->pc = 0x118388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x11838c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x11838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x118390: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118390u;
    {
        const bool branch_taken_0x118390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x118390) {
            ctx->pc = 0x118394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118390u;
            // 0x118394: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1183A4u;
            goto label_1183a4;
        }
    }
    ctx->pc = 0x118398u;
    // 0x118398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11839c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11839Cu;
    {
        const bool branch_taken_0x11839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11839Cu;
        // 0x1183a0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11839c) {
            ctx->pc = 0x1183E8u;
            goto label_1183e8;
        }
    }
    ctx->pc = 0x1183A4u;
label_1183a4:
    // 0x1183a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1183a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1183a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1183A8u;
    {
        const bool branch_taken_0x1183a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1183ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183A8u;
        // 0x1183ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183a8) {
            ctx->pc = 0x1183E8u;
            goto label_1183e8;
        }
    }
    ctx->pc = 0x1183B0u;
    // 0x1183b0: 0xc046002  jal         func_118008
    ctx->pc = 0x1183B0u;
    SET_GPR_U32(ctx, 31, 0x1183B8u);
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x1183B0u, 0x1183B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183B8u;
label_1183b8:
    // 0x1183b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1183b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1183bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1183c0: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x1183c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x1183c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1183c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1183c8: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x1183c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1183cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1183CCu;
    {
        const bool branch_taken_0x1183cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183CCu;
        // 0x1183d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183cc) {
            ctx->pc = 0x1183E4u;
            goto label_1183e4;
        }
    }
    ctx->pc = 0x1183D4u;
    // 0x1183d4: 0xc045f24  jal         func_117C90
    ctx->pc = 0x1183D4u;
    SET_GPR_U32(ctx, 31, 0x1183DCu);
    ctx->pc = 0x1183D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183D4u;
    // 0x1183d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C90u, 0x1183D4u, 0x1183DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183DCu;
label_1183dc:
    // 0x1183dc: 0xc045ec0  jal         func_117B00
    ctx->pc = 0x1183DCu;
    SET_GPR_U32(ctx, 31, 0x1183E4u);
    ctx->pc = 0x1183E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183DCu;
    // 0x1183e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B00u, 0x1183DCu, 0x1183E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183E4u;
label_1183e4:
    // 0x1183e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1183e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1183e8:
    // 0x1183e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1183e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1183ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1183ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1183f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1183f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1183f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1183F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1183F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183F4u;
        // 0x1183f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1183F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1183FCu;
    // 0x1183fc: 0x0  nop
    ctx->pc = 0x1183fcu;
    // NOP
}
