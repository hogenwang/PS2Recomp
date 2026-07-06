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

// Function: sub_001FA990
// Address: 0x1fa990 - 0x1faa18
void sub_001FA990_0x1fa990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA990_0x1fa990");
#endif

    switch (ctx->pc) {
        case 0x1fa9b4u: goto label_1fa9b4;
        case 0x1fa9f8u: goto label_1fa9f8;
        default: break;
    }

    ctx->pc = 0x1fa990u;

    // 0x1fa990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa99c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa9a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fa9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa9a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fa9a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fa9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fa9ac: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA9ACu;
    SET_GPR_U32(ctx, 31, 0x1FA9B4u);
    ctx->pc = 0x1FA9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA9ACu;
    // 0x1fa9b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FA9ACu, 0x1FA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA9B4u;
label_1fa9b4:
    // 0x1fa9b4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa9b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa9bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA9BCu;
    {
        const bool branch_taken_0x1fa9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9BCu;
        // 0x1fa9c0: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9bc) {
            ctx->pc = 0x1FA9E0u;
            goto label_1fa9e0;
        }
    }
    ctx->pc = 0x1FA9C4u;
    // 0x1fa9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa9cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa9ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa9d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fa9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa9d4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FA9D4u;
    ctx->pc = 0x1FA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA9D4u;
    // 0x1fa9d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FA9DCu;
    // 0x1fa9dc: 0x0  nop
    ctx->pc = 0x1fa9dcu;
    // NOP
label_1fa9e0:
    // 0x1fa9e0: 0x8e033708  lw          $v1, 0x3708($s0)
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1fa9e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA9E4u;
    {
        const bool branch_taken_0x1fa9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9E4u;
        // 0x1fa9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9e4) {
            ctx->pc = 0x1FA9FCu;
            goto label_1fa9fc;
        }
    }
    ctx->pc = 0x1FA9ECu;
    // 0x1fa9ec: 0xac710dcc  sw          $s1, 0xDCC($v1)
    ctx->pc = 0x1fa9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3532), GPR_U32(ctx, 17));
    // 0x1fa9f0: 0xc07eb08  jal         func_1FAC20
    ctx->pc = 0x1FA9F0u;
    SET_GPR_U32(ctx, 31, 0x1FA9F8u);
    ctx->pc = 0x1FA9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA9F0u;
    // 0x1fa9f4: 0xac720dc8  sw          $s2, 0xDC8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 3528), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC20u, 0x1FA9F0u, 0x1FA9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA9F8u;
label_1fa9f8:
    // 0x1fa9f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa9fc:
    // 0x1fa9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faa00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faa00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faa04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1faa04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faa08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1faa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1faa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA0Cu;
        // 0x1faa10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAA14u;
    // 0x1faa14: 0x0  nop
    ctx->pc = 0x1faa14u;
    // NOP
    if (ctx->pc == 0x1faa14u) { ctx->pc = 0x1faa18u; }
}
