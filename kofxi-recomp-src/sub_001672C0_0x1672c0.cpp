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

// Function: sub_001672C0
// Address: 0x1672c0 - 0x167380
void sub_001672C0_0x1672c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001672C0_0x1672c0");
#endif

    switch (ctx->pc) {
        case 0x1672e0u: goto label_1672e0;
        case 0x167310u: goto label_167310;
        case 0x16734cu: goto label_16734c;
        case 0x16735cu: goto label_16735c;
        default: break;
    }

    ctx->pc = 0x1672c0u;

    // 0x1672c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1672c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1672c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1672c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1672c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1672c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1672cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1672ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1672d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1672d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1672d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672d8: 0xc0635c0  jal         func_18D700
    ctx->pc = 0x1672D8u;
    SET_GPR_U32(ctx, 31, 0x1672E0u);
    ctx->pc = 0x1672DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672D8u;
    // 0x1672dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D700u, 0x1672D8u, 0x1672E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672E0u;
label_1672e0:
    // 0x1672e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1672e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672e4: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1672E4u;
    {
        const bool branch_taken_0x1672e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1672e4) {
            ctx->pc = 0x1672E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1672E4u;
            // 0x1672e8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1672F4u;
            goto label_1672f4;
        }
    }
    ctx->pc = 0x1672ECu;
    // 0x1672ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1672ECu;
    {
        const bool branch_taken_0x1672ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672ECu;
        // 0x1672f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672ec) {
            ctx->pc = 0x167360u;
            goto label_167360;
        }
    }
    ctx->pc = 0x1672F4u;
label_1672f4:
    // 0x1672f4: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1672f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1672f8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1672F8u;
    {
        const bool branch_taken_0x1672f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1672f8) {
            ctx->pc = 0x1672FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1672F8u;
            // 0x1672fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167308u;
            goto label_167308;
        }
    }
    ctx->pc = 0x167300u;
    // 0x167300: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x167300u;
    {
        const bool branch_taken_0x167300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167300u;
        // 0x167304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167300) {
            ctx->pc = 0x167360u;
            goto label_167360;
        }
    }
    ctx->pc = 0x167308u;
label_167308:
    // 0x167308: 0xc059668  jal         func_1659A0
    ctx->pc = 0x167308u;
    SET_GPR_U32(ctx, 31, 0x167310u);
    ctx->pc = 0x1659A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659A0u, 0x167308u, 0x167310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167310u;
label_167310:
    // 0x167310: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x167310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x167314: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167314u;
    {
        const bool branch_taken_0x167314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167314) {
            ctx->pc = 0x167318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167314u;
            // 0x167318: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167324u;
            goto label_167324;
        }
    }
    ctx->pc = 0x16731Cu;
    // 0x16731c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16731Cu;
    {
        const bool branch_taken_0x16731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16731Cu;
        // 0x167320: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16731c) {
            ctx->pc = 0x167360u;
            goto label_167360;
        }
    }
    ctx->pc = 0x167324u;
label_167324:
    // 0x167324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167328: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x167328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16732c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16732cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167330: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x167330u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x167334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x167334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167338: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x167338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16733c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16733cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x167340: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x167344: 0xc059ce0  jal         func_167380
    ctx->pc = 0x167344u;
    SET_GPR_U32(ctx, 31, 0x16734Cu);
    ctx->pc = 0x167348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167344u;
    // 0x167348: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167380u, 0x167344u, 0x16734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16734Cu;
label_16734c:
    // 0x16734c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16734Cu;
    {
        const bool branch_taken_0x16734c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16734c) {
            ctx->pc = 0x167350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16734Cu;
            // 0x167350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167360u;
            goto label_167360;
        }
    }
    ctx->pc = 0x167354u;
    // 0x167354: 0xc059678  jal         func_1659E0
    ctx->pc = 0x167354u;
    SET_GPR_U32(ctx, 31, 0x16735Cu);
    ctx->pc = 0x167358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167354u;
    // 0x167358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659E0u, 0x167354u, 0x16735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16735Cu;
label_16735c:
    // 0x16735c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167360:
    // 0x167360: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x167360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16736c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16736cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167370: 0x3e00008  jr          $ra
    ctx->pc = 0x167370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167370u;
        // 0x167374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167378u;
    // 0x167378: 0x0  nop
    ctx->pc = 0x167378u;
    // NOP
    // 0x16737c: 0x0  nop
    ctx->pc = 0x16737cu;
    // NOP
    if (ctx->pc == 0x16737cu) { ctx->pc = 0x167380u; }
}
