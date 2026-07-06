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

// Function: sub_001FA920
// Address: 0x1fa920 - 0x1fa990
void sub_001FA920_0x1fa920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA920_0x1fa920");
#endif

    switch (ctx->pc) {
        case 0x1fa93cu: goto label_1fa93c;
        case 0x1fa978u: goto label_1fa978;
        default: break;
    }

    ctx->pc = 0x1fa920u;

    // 0x1fa920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa92c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa934: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA934u;
    SET_GPR_U32(ctx, 31, 0x1FA93Cu);
    ctx->pc = 0x1FA938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA934u;
    // 0x1fa938: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FA934u, 0x1FA93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA93Cu;
label_1fa93c:
    // 0x1fa93c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa940: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA940u;
    {
        const bool branch_taken_0x1fa940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA940u;
        // 0x1fa944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa940) {
            ctx->pc = 0x1FA960u;
            goto label_1fa960;
        }
    }
    ctx->pc = 0x1FA948u;
    // 0x1fa948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa94c: 0x34a50159  ori         $a1, $a1, 0x159
    ctx->pc = 0x1fa94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)345);
    // 0x1fa950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa958: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FA958u;
    ctx->pc = 0x1FA95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA958u;
    // 0x1fa95c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FA960u;
label_1fa960:
    // 0x1fa960: 0x8e033708  lw          $v1, 0x3708($s0)
    ctx->pc = 0x1fa960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1fa964: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA964u;
    {
        const bool branch_taken_0x1fa964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa964) {
            ctx->pc = 0x1FA968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA964u;
            // 0x1fa968: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA980u;
            goto label_1fa980;
        }
    }
    ctx->pc = 0x1FA96Cu;
    // 0x1fa96c: 0xac710dc4  sw          $s1, 0xDC4($v1)
    ctx->pc = 0x1fa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3524), GPR_U32(ctx, 17));
    // 0x1fa970: 0xc07eb08  jal         func_1FAC20
    ctx->pc = 0x1FA970u;
    SET_GPR_U32(ctx, 31, 0x1FA978u);
    ctx->pc = 0x1FA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA970u;
    // 0x1fa974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC20u, 0x1FA970u, 0x1FA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA978u;
label_1fa978:
    // 0x1fa978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa980:
    // 0x1fa980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa988: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA988u;
        // 0x1fa98c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA990u;
}
