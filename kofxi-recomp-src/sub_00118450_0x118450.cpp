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

// Function: sub_00118450
// Address: 0x118450 - 0x118650
void sub_00118450_0x118450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118450_0x118450");
#endif

    switch (ctx->pc) {
        case 0x1184bcu: goto label_1184bc;
        case 0x1184f8u: goto label_1184f8;
        case 0x118510u: goto label_118510;
        case 0x118548u: goto label_118548;
        case 0x118554u: goto label_118554;
        case 0x118564u: goto label_118564;
        case 0x1185acu: goto label_1185ac;
        case 0x1185e4u: goto label_1185e4;
        case 0x118600u: goto label_118600;
        case 0x11862cu: goto label_11862c;
        default: break;
    }

    ctx->pc = 0x118450u;

label_118450:
    // 0x118450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118454: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x118454u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x118458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11845c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11845cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118460: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x118460u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x118464: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118468: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118468u;
    {
        const bool branch_taken_0x118468 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118468u;
        // 0x11846c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118468) {
            ctx->pc = 0x118480u;
            goto label_118480;
        }
    }
    ctx->pc = 0x118470u;
    // 0x118470: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x118470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118474: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x118474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x118478: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118478u;
    {
        const bool branch_taken_0x118478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x118478) {
            ctx->pc = 0x11847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118478u;
            // 0x11847c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11848Cu;
            goto label_11848c;
        }
    }
    ctx->pc = 0x118480u;
label_118480:
    // 0x118480: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118484: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x118484u;
    {
        const bool branch_taken_0x118484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118484u;
        // 0x118488: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118484) {
            ctx->pc = 0x118514u;
            goto label_118514;
        }
    }
    ctx->pc = 0x11848Cu;
label_11848c:
    // 0x11848c: 0x24519d48  addiu       $s1, $v0, -0x62B8
    ctx->pc = 0x11848cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x118490: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x118490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x118494: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118494u;
    {
        const bool branch_taken_0x118494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x118494) {
            ctx->pc = 0x118498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118494u;
            // 0x118498: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1184A8u;
            goto label_1184a8;
        }
    }
    ctx->pc = 0x11849Cu;
    // 0x11849c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1184a0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1184A0u;
    {
        const bool branch_taken_0x1184a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184A0u;
        // 0x1184a4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184a0) {
            ctx->pc = 0x118514u;
            goto label_118514;
        }
    }
    ctx->pc = 0x1184A8u;
label_1184a8:
    // 0x1184a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1184a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1184ac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1184ACu;
    {
        const bool branch_taken_0x1184ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184ACu;
        // 0x1184b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184ac) {
            ctx->pc = 0x118514u;
            goto label_118514;
        }
    }
    ctx->pc = 0x1184B4u;
    // 0x1184b4: 0xc046002  jal         func_118008
    ctx->pc = 0x1184B4u;
    SET_GPR_U32(ctx, 31, 0x1184BCu);
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x1184B4u, 0x1184BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184BCu;
label_1184bc:
    // 0x1184bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1184bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1184c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1184c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184c4: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x1184c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1184c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1184c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1184cc: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1184ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1184d0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1184d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1184d4: 0x244202f  dsubu       $a0, $s2, $a0
    ctx->pc = 0x1184d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) - GPR_U64(ctx, 4));
    // 0x1184d8: 0x30a60002  andi        $a2, $a1, 0x2
    ctx->pc = 0x1184d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1184dc: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1184dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1184e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1184e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1184e4: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1184e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x1184e8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1184E8u;
    {
        const bool branch_taken_0x1184e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184E8u;
        // 0x1184ec: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184e8) {
            ctx->pc = 0x118510u;
            goto label_118510;
        }
    }
    ctx->pc = 0x1184F0u;
    // 0x1184f0: 0xc045f46  jal         func_117D18
    ctx->pc = 0x1184F0u;
    SET_GPR_U32(ctx, 31, 0x1184F8u);
    ctx->pc = 0x1184F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184F0u;
    // 0x1184f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D18u, 0x1184F0u, 0x1184F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184F8u;
label_1184f8:
    // 0x1184f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1184f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184fc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1184fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x118500: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x118500u;
    {
        const bool branch_taken_0x118500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x118500) {
            ctx->pc = 0x118504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118500u;
            // 0x118504: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118508u;
            goto label_118508;
        }
    }
    ctx->pc = 0x118508u;
label_118508:
    // 0x118508: 0xc045ec0  jal         func_117B00
    ctx->pc = 0x118508u;
    SET_GPR_U32(ctx, 31, 0x118510u);
    ctx->pc = 0x11850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118508u;
    // 0x11850c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B00u, 0x118508u, 0x118510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118510u;
label_118510:
    // 0x118510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_118514:
    // 0x118514: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118518: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11851c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11851cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118524: 0x3e00008  jr          $ra
    ctx->pc = 0x118524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118524u;
        // 0x118528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11852Cu;
    // 0x11852c: 0x0  nop
    ctx->pc = 0x11852cu;
    // NOP
    // 0x118530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118538: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11853c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118540: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118540u;
    SET_GPR_U32(ctx, 31, 0x118548u);
    ctx->pc = 0x118544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118540u;
    // 0x118544: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x118540u, 0x118548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118548u;
label_118548:
    // 0x118548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11854c: 0xc046114  jal         func_118450
    ctx->pc = 0x11854Cu;
    SET_GPR_U32(ctx, 31, 0x118554u);
    ctx->pc = 0x118550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11854Cu;
    // 0x118550: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118450u;
    goto label_118450;
    ctx->pc = 0x118554u;
label_118554:
    // 0x118554: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118554u;
    {
        const bool branch_taken_0x118554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118554u;
        // 0x118558: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118554) {
            ctx->pc = 0x118564u;
            goto label_118564;
        }
    }
    ctx->pc = 0x11855Cu;
    // 0x11855c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11855Cu;
    SET_GPR_U32(ctx, 31, 0x118564u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11855Cu, 0x118564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118564u;
label_118564:
    // 0x118564: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118568: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11856c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11856cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118574: 0x3e00008  jr          $ra
    ctx->pc = 0x118574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118574u;
        // 0x118578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11857Cu;
    // 0x11857c: 0x0  nop
    ctx->pc = 0x11857cu;
    // NOP
    // 0x118580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118584: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118588: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11858c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118594: 0x111282  srl         $v0, $s1, 10
    ctx->pc = 0x118594u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 10));
    // 0x118598: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11859c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11859cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1185a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1185a4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1185A4u;
    SET_GPR_U32(ctx, 31, 0x1185ACu);
    ctx->pc = 0x1185A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1185A4u;
    // 0x1185a8: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1185A4u, 0x1185ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185ACu;
label_1185ac:
    // 0x1185ac: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1185ACu;
    {
        const bool branch_taken_0x1185ac = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1185B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185ACu;
        // 0x1185b0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185ac) {
            ctx->pc = 0x1185D4u;
            goto label_1185d4;
        }
    }
    ctx->pc = 0x1185B4u;
    // 0x1185b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1185b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1185b8: 0x322203ff  andi        $v0, $s1, 0x3FF
    ctx->pc = 0x1185b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1023);
    // 0x1185bc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1185BCu;
    {
        const bool branch_taken_0x1185bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1185C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185BCu;
        // 0x1185c0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185bc) {
            ctx->pc = 0x1185D4u;
            goto label_1185d4;
        }
    }
    ctx->pc = 0x1185C4u;
    // 0x1185c4: 0x24429d48  addiu       $v0, $v0, -0x62B8
    ctx->pc = 0x1185c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x1185c8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1185c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1185cc: 0x54710007  bnel        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1185CCu;
    {
        const bool branch_taken_0x1185cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1185cc) {
            ctx->pc = 0x1185D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1185CCu;
            // 0x1185d0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1185ECu;
            goto label_1185ec;
        }
    }
    ctx->pc = 0x1185D4u;
label_1185d4:
    // 0x1185d4: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1185D4u;
    {
        const bool branch_taken_0x1185d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185D4u;
        // 0x1185d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185d4) {
            ctx->pc = 0x118630u;
            goto label_118630;
        }
    }
    ctx->pc = 0x1185DCu;
    // 0x1185dc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x1185DCu;
    SET_GPR_U32(ctx, 31, 0x1185E4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1185DCu, 0x1185E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185E4u;
label_1185e4:
    // 0x1185e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1185E4u;
    {
        const bool branch_taken_0x1185e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185E4u;
        // 0x1185e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185e4) {
            ctx->pc = 0x118630u;
            goto label_118630;
        }
    }
    ctx->pc = 0x1185ECu;
label_1185ec:
    // 0x1185ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1185ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1185f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1185F0u;
    {
        const bool branch_taken_0x1185f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185F0u;
        // 0x1185f4: 0xde110018  ld          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185f0) {
            ctx->pc = 0x118618u;
            goto label_118618;
        }
    }
    ctx->pc = 0x1185F8u;
    // 0x1185f8: 0xc046002  jal         func_118008
    ctx->pc = 0x1185F8u;
    SET_GPR_U32(ctx, 31, 0x118600u);
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x1185F8u, 0x118600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118600u;
label_118600:
    // 0x118600: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x118600u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x118604: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x118604u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x118608: 0x43182f  dsubu       $v1, $v0, $v1
    ctx->pc = 0x118608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x11860c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x11860cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x118610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118610u;
    {
        const bool branch_taken_0x118610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118610u;
        // 0x118614: 0x223882d  daddu       $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118610) {
            ctx->pc = 0x11861Cu;
            goto label_11861c;
        }
    }
    ctx->pc = 0x118618u;
label_118618:
    // 0x118618: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x118618u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_11861c:
    // 0x11861c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11861Cu;
    {
        const bool branch_taken_0x11861c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x118620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11861Cu;
        // 0x118620: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11861c) {
            ctx->pc = 0x118630u;
            goto label_118630;
        }
    }
    ctx->pc = 0x118624u;
    // 0x118624: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118624u;
    SET_GPR_U32(ctx, 31, 0x11862Cu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118624u, 0x11862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11862Cu;
label_11862c:
    // 0x11862c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11862cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_118630:
    // 0x118630: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118634: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118638: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11863c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11863cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118644: 0x3e00008  jr          $ra
    ctx->pc = 0x118644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118644u;
        // 0x118648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11864Cu;
    // 0x11864c: 0x0  nop
    ctx->pc = 0x11864cu;
    // NOP
}
