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

// Function: sub_00118190
// Address: 0x118190 - 0x118250
void sub_00118190_0x118190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118190_0x118190");
#endif

    switch (ctx->pc) {
        case 0x1181fcu: goto label_1181fc;
        default: break;
    }

    ctx->pc = 0x118190u;

    // 0x118190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118194: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x118194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x118198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11819c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1181a0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x1181a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1181a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1181a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1181a8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1181A8u;
    {
        const bool branch_taken_0x1181a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1181ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181A8u;
        // 0x1181ac: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181a8) {
            ctx->pc = 0x1181C0u;
            goto label_1181c0;
        }
    }
    ctx->pc = 0x1181B0u;
    // 0x1181b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1181b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1181b4: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1181b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1181b8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1181B8u;
    {
        const bool branch_taken_0x1181b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1181BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181B8u;
        // 0x1181bc: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181b8) {
            ctx->pc = 0x1181CCu;
            goto label_1181cc;
        }
    }
    ctx->pc = 0x1181C0u;
label_1181c0:
    // 0x1181c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1181c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1181c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1181C4u;
    {
        const bool branch_taken_0x1181c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181C4u;
        // 0x1181c8: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181c4) {
            ctx->pc = 0x118234u;
            goto label_118234;
        }
    }
    ctx->pc = 0x1181CCu;
label_1181cc:
    // 0x1181cc: 0x26519d48  addiu       $s1, $s2, -0x62B8
    ctx->pc = 0x1181ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942024));
    // 0x1181d0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1181d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1181d4: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1181D4u;
    {
        const bool branch_taken_0x1181d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1181d4) {
            ctx->pc = 0x1181D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1181D4u;
            // 0x1181d8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1181E8u;
            goto label_1181e8;
        }
    }
    ctx->pc = 0x1181DCu;
    // 0x1181dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1181dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1181e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1181E0u;
    {
        const bool branch_taken_0x1181e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181E0u;
        // 0x1181e4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181e0) {
            ctx->pc = 0x118234u;
            goto label_118234;
        }
    }
    ctx->pc = 0x1181E8u;
label_1181e8:
    // 0x1181e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1181e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1181ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1181ECu;
    {
        const bool branch_taken_0x1181ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1181ec) {
            ctx->pc = 0x11820Cu;
            goto label_11820c;
        }
    }
    ctx->pc = 0x1181F4u;
    // 0x1181f4: 0xc045f46  jal         func_117D18
    ctx->pc = 0x1181F4u;
    SET_GPR_U32(ctx, 31, 0x1181FCu);
    ctx->pc = 0x1181F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1181F4u;
    // 0x1181f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D18u, 0x1181F4u, 0x1181FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181FCu;
label_1181fc:
    // 0x1181fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1181fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118200: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x118200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x118204: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x118204u;
    {
        const bool branch_taken_0x118204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x118204) {
            ctx->pc = 0x118208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118204u;
            // 0x118208: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11820Cu;
            goto label_11820c;
        }
    }
    ctx->pc = 0x11820Cu;
label_11820c:
    // 0x11820c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11820cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x118210: 0x26439d48  addiu       $v1, $s2, -0x62B8
    ctx->pc = 0x118210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942024));
    // 0x118214: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x118214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x118218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11821c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x118220: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x118220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x118224: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x118224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x118228: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x118228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11822c: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x11822cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x118230: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x118230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_118234:
    // 0x118234: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11823c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11823cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118244: 0x3e00008  jr          $ra
    ctx->pc = 0x118244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118244u;
        // 0x118248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11824Cu;
    // 0x11824c: 0x0  nop
    ctx->pc = 0x11824cu;
    // NOP
}
