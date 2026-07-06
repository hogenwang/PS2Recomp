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

// Function: sub_001F9478
// Address: 0x1f9478 - 0x1f94e8
void sub_001F9478_0x1f9478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9478_0x1f9478");
#endif

    switch (ctx->pc) {
        case 0x1f9494u: goto label_1f9494;
        default: break;
    }

    ctx->pc = 0x1f9478u;

    // 0x1f9478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f947c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9480: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f9480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f948c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F948Cu;
    SET_GPR_U32(ctx, 31, 0x1F9494u);
    ctx->pc = 0x1F9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F948Cu;
    // 0x1f9490: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F948Cu, 0x1F9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9494u;
label_1f9494:
    // 0x1f9494: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f9494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f9498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f9498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f949c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f949cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94a0: 0x34a50134  ori         $a1, $a1, 0x134
    ctx->pc = 0x1f94a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
    // 0x1f94a4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1f94a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f94a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F94A8u;
    {
        const bool branch_taken_0x1f94a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94A8u;
        // 0x1f94ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94a8) {
            ctx->pc = 0x1F94C8u;
            goto label_1f94c8;
        }
    }
    ctx->pc = 0x1F94B0u;
    // 0x1f94b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f94b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f94b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f94b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f94b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f94b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f94bc: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F94BCu;
    ctx->pc = 0x1F94C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94BCu;
    // 0x1f94c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F94C4u;
    // 0x1f94c4: 0x0  nop
    ctx->pc = 0x1f94c4u;
    // NOP
label_1f94c8:
    // 0x1f94c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f94c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f94ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f94d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f94d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f94d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f94d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f94d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f94dc: 0x807f662  j           func_1FD988
    ctx->pc = 0x1F94DCu;
    ctx->pc = 0x1F94E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94DCu;
    // 0x1f94e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    sub_001FD988_0x1fd988(rdram, ctx, runtime); return;
    ctx->pc = 0x1F94E4u;
    // 0x1f94e4: 0x0  nop
    ctx->pc = 0x1f94e4u;
    // NOP
    if (ctx->pc == 0x1f94e4u) { ctx->pc = 0x1f94e8u; }
}
