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

// Function: sub_001F94E8
// Address: 0x1f94e8 - 0x1f9568
void sub_001F94E8_0x1f94e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F94E8_0x1f94e8");
#endif

    switch (ctx->pc) {
        case 0x1f950cu: goto label_1f950c;
        default: break;
    }

    ctx->pc = 0x1f94e8u;

    // 0x1f94e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f94e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f94ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f94ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f94f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f94f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f94f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f94f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f94f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f94fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f9500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f9500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f9504: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F9504u;
    SET_GPR_U32(ctx, 31, 0x1F950Cu);
    ctx->pc = 0x1F9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9504u;
    // 0x1f9508: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F9504u, 0x1F950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F950Cu;
label_1f950c:
    // 0x1f950c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f950cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f9510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9514: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f9514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9518: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f9518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f951c: 0x34a50135  ori         $a1, $a1, 0x135
    ctx->pc = 0x1f951cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
    // 0x1f9520: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9520u;
    {
        const bool branch_taken_0x1f9520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9520u;
        // 0x1f9524: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9520) {
            ctx->pc = 0x1F9548u;
            goto label_1f9548;
        }
    }
    ctx->pc = 0x1F9528u;
    // 0x1f9528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f952c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9534: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9538: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f953c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F953Cu;
    ctx->pc = 0x1F9540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F953Cu;
    // 0x1f9540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F9544u;
    // 0x1f9544: 0x0  nop
    ctx->pc = 0x1f9544u;
    // NOP
label_1f9548:
    // 0x1f9548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f954c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f954cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9550: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9554: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9558: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f955c: 0x807f662  j           func_1FD988
    ctx->pc = 0x1F955Cu;
    ctx->pc = 0x1F9560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F955Cu;
    // 0x1f9560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    sub_001FD988_0x1fd988(rdram, ctx, runtime); return;
    ctx->pc = 0x1F9564u;
    // 0x1f9564: 0x0  nop
    ctx->pc = 0x1f9564u;
    // NOP
}
