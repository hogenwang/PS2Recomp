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

// Function: sub_001B20A8
// Address: 0x1b20a8 - 0x1b2168
void sub_001B20A8_0x1b20a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B20A8_0x1b20a8");
#endif

    switch (ctx->pc) {
        case 0x1b20f0u: goto label_1b20f0;
        case 0x1b2108u: goto label_1b2108;
        case 0x1b213cu: goto label_1b213c;
        case 0x1b214cu: goto label_1b214c;
        default: break;
    }

    ctx->pc = 0x1b20a8u;

    // 0x1b20a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b20ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1b20acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b20b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b20b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b20b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b20b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b20bc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1b20bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b20c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b20c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20c8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B20C8u;
    {
        const bool branch_taken_0x1b20c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20C8u;
        // 0x1b20cc: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20c8) {
            ctx->pc = 0x1B20E8u;
            goto label_1b20e8;
        }
    }
    ctx->pc = 0x1B20D0u;
    // 0x1b20d0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b20d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b20d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b20d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b20d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b20dc: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x1b20dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
    // 0x1b20e0: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B20E0u;
    ctx->pc = 0x1B20E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20E0u;
    // 0x1b20e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B20E8u;
label_1b20e8:
    // 0x1b20e8: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x1B20E8u;
    SET_GPR_U32(ctx, 31, 0x1B20F0u);
    ctx->pc = 0x1B20ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20E8u;
    // 0x1b20ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x1B20E8u, 0x1B20F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20F0u;
label_1b20f0:
    // 0x1b20f0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b20f4: 0x24847c20  addiu       $a0, $a0, 0x7C20
    ctx->pc = 0x1b20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31776));
    // 0x1b20f8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B20F8u;
    {
        const bool branch_taken_0x1b20f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20F8u;
        // 0x1b20fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20f8) {
            ctx->pc = 0x1B2108u;
            goto label_1b2108;
        }
    }
    ctx->pc = 0x1B2100u;
    // 0x1b2100: 0xc06ba28  jal         func_1AE8A0
    ctx->pc = 0x1B2100u;
    SET_GPR_U32(ctx, 31, 0x1B2108u);
    ctx->pc = 0x1AE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8A0u, 0x1B2100u, 0x1B2108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2108u;
label_1b2108:
    // 0x1b2108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b210c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2110: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2110u;
        // 0x1b2114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2118u;
    // 0x1b2118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b211c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b211cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2128: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b212c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2130: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b2130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b2134: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B2134u;
    SET_GPR_U32(ctx, 31, 0x1B213Cu);
    ctx->pc = 0x1B2138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2134u;
    // 0x1b2138: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B2134u, 0x1B213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B213Cu;
label_1b213c:
    // 0x1b213c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2144: 0xc06c85a  jal         func_1B2168
    ctx->pc = 0x1B2144u;
    SET_GPR_U32(ctx, 31, 0x1B214Cu);
    ctx->pc = 0x1B2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2144u;
    // 0x1b2148: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2168u, 0x1B2144u, 0x1B214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B214Cu;
label_1b214c:
    // 0x1b214c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b214cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2158: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b215c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B215Cu;
    ctx->pc = 0x1B2160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B215Cu;
    // 0x1b2160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2164u;
    // 0x1b2164: 0x0  nop
    ctx->pc = 0x1b2164u;
    // NOP
    if (ctx->pc == 0x1b2164u) { ctx->pc = 0x1b2168u; }
}
