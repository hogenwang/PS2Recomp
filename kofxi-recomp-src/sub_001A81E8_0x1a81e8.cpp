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

// Function: sub_001A81E8
// Address: 0x1a81e8 - 0x1a8250
void sub_001A81E8_0x1a81e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A81E8_0x1a81e8");
#endif

    switch (ctx->pc) {
        case 0x1a8208u: goto label_1a8208;
        case 0x1a821cu: goto label_1a821c;
        case 0x1a8234u: goto label_1a8234;
        default: break;
    }

    ctx->pc = 0x1a81e8u;

    // 0x1a81e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a81e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a81ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a81ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a81f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a81f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a81f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a81f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a81fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a81fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8200: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8200u;
    SET_GPR_U32(ctx, 31, 0x1A8208u);
    ctx->pc = 0x1A8204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8200u;
    // 0x1a8204: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8200u, 0x1A8208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8208u;
label_1a8208:
    // 0x1a8208: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a8208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1a820c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a820cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8210: 0x26103280  addiu       $s0, $s0, 0x3280
    ctx->pc = 0x1a8210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12928));
    // 0x1a8214: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8214u;
    SET_GPR_U32(ctx, 31, 0x1A821Cu);
    ctx->pc = 0x1A8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8214u;
    // 0x1a8218: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8214u, 0x1A821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A821Cu;
label_1a821c:
    // 0x1a821c: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a821cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8220: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a8220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1a8224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8228: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a822c: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A822Cu;
    SET_GPR_U32(ctx, 31, 0x1A8234u);
    ctx->pc = 0x1A8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A822Cu;
    // 0x1a8230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A822Cu, 0x1A8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8234u;
label_1a8234:
    // 0x1a8234: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a823c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a823cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8244: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8244u;
        // 0x1a8248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A824Cu;
    // 0x1a824c: 0x0  nop
    ctx->pc = 0x1a824cu;
    // NOP
    if (ctx->pc == 0x1a824cu) { ctx->pc = 0x1a8250u; }
}
