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

// Function: sub_001B2028
// Address: 0x1b2028 - 0x1b20a8
void sub_001B2028_0x1b2028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2028_0x1b2028");
#endif

    switch (ctx->pc) {
        case 0x1b2074u: goto label_1b2074;
        case 0x1b2088u: goto label_1b2088;
        default: break;
    }

    ctx->pc = 0x1b2028u;

    // 0x1b2028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b202c: 0x3c07000f  lui         $a3, 0xF
    ctx->pc = 0x1b202cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15 << 16));
    // 0x1b2030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2038: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1b2038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1b203c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b203cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2040: 0x806c82a  j           func_1B20A8
    ctx->pc = 0x1B2040u;
    ctx->pc = 0x1B2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2040u;
    // 0x1b2044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20A8u;
    sub_001B20A8_0x1b20a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2048u;
    // 0x1b2048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b204c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b205c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2060: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b2060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2064: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2068: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b206c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B206Cu;
    SET_GPR_U32(ctx, 31, 0x1B2074u);
    ctx->pc = 0x1B2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B206Cu;
    // 0x1b2070: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B206Cu, 0x1B2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2074u;
label_1b2074:
    // 0x1b2074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b207c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b207cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2080: 0xc06c82a  jal         func_1B20A8
    ctx->pc = 0x1B2080u;
    SET_GPR_U32(ctx, 31, 0x1B2088u);
    ctx->pc = 0x1B2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2080u;
    // 0x1b2084: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B20A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20A8u, 0x1B2080u, 0x1B2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2088u;
label_1b2088:
    // 0x1b2088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b208c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b208cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2094: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b209c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B209Cu;
    ctx->pc = 0x1B20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B209Cu;
    // 0x1b20a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B20A4u;
    // 0x1b20a4: 0x0  nop
    ctx->pc = 0x1b20a4u;
    // NOP
    if (ctx->pc == 0x1b20a4u) { ctx->pc = 0x1b20a8u; }
}
