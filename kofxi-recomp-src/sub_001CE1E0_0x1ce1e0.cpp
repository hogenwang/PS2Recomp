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

// Function: sub_001CE1E0
// Address: 0x1ce1e0 - 0x1ce250
void sub_001CE1E0_0x1ce1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE1E0_0x1ce1e0");
#endif

    switch (ctx->pc) {
        case 0x1ce214u: goto label_1ce214;
        case 0x1ce22cu: goto label_1ce22c;
        default: break;
    }

    ctx->pc = 0x1ce1e0u;

    // 0x1ce1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce1f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ce1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ce1f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ce1f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ce1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ce200: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ce200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce204: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ce204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ce208: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ce208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ce20c: 0xc0736d2  jal         func_1CDB48
    ctx->pc = 0x1CE20Cu;
    SET_GPR_U32(ctx, 31, 0x1CE214u);
    ctx->pc = 0x1CE210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE20Cu;
    // 0x1ce210: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB48u, 0x1CE20Cu, 0x1CE214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE214u;
label_1ce214:
    // 0x1ce214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce21c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ce21cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce220: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ce220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce224: 0xc073894  jal         func_1CE250
    ctx->pc = 0x1CE224u;
    SET_GPR_U32(ctx, 31, 0x1CE22Cu);
    ctx->pc = 0x1CE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE224u;
    // 0x1ce228: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE250u, 0x1CE224u, 0x1CE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE22Cu;
label_1ce22c:
    // 0x1ce22c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce238: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce23c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ce23cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce240: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ce240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ce244: 0x80736d8  j           func_1CDB60
    ctx->pc = 0x1CE244u;
    ctx->pc = 0x1CE248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE244u;
    // 0x1ce248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    kofxiLeaveCallbackCriticalSection_0x1cdb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE24Cu;
    // 0x1ce24c: 0x0  nop
    ctx->pc = 0x1ce24cu;
    // NOP
    if (ctx->pc == 0x1ce24cu) { ctx->pc = 0x1ce250u; }
}
