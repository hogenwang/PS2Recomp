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

// Function: sub_001BB010
// Address: 0x1bb010 - 0x1bb050
void sub_001BB010_0x1bb010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB010_0x1bb010");
#endif

    switch (ctx->pc) {
        case 0x1bb02cu: goto label_1bb02c;
        case 0x1bb038u: goto label_1bb038;
        default: break;
    }

    ctx->pc = 0x1bb010u;

    // 0x1bb010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb01c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb024: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB024u;
    SET_GPR_U32(ctx, 31, 0x1BB02Cu);
    ctx->pc = 0x1BB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB024u;
    // 0x1bb028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB024u, 0x1BB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB02Cu;
label_1bb02c:
    // 0x1bb02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb030: 0xc06ec14  jal         func_1BB050
    ctx->pc = 0x1BB030u;
    SET_GPR_U32(ctx, 31, 0x1BB038u);
    ctx->pc = 0x1BB034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB030u;
    // 0x1bb034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB050u, 0x1BB030u, 0x1BB038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB038u;
label_1bb038:
    // 0x1bb038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb03c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb044: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB044u;
    ctx->pc = 0x1BB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB044u;
    // 0x1bb048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB04Cu;
    // 0x1bb04c: 0x0  nop
    ctx->pc = 0x1bb04cu;
    // NOP
    if (ctx->pc == 0x1bb04cu) { ctx->pc = 0x1bb050u; }
}
