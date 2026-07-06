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

// Function: sub_0021E210
// Address: 0x21e210 - 0x21e2a8
void sub_0021E210_0x21e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E210_0x21e210");
#endif

    ctx->pc = 0x21e210u;

    // 0x21e210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e214: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e21c: 0x24841b48  addiu       $a0, $a0, 0x1B48
    ctx->pc = 0x21e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6984));
    // 0x21e220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e224: 0x8043e52  j           func_10F948
    ctx->pc = 0x21E224u;
    ctx->pc = 0x21E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E224u;
    // 0x21e228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21E22Cu;
    // 0x21e22c: 0x0  nop
    ctx->pc = 0x21e22cu;
    // NOP
    // 0x21e230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e234: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21e234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e23c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e240: 0x24841b70  addiu       $a0, $a0, 0x1B70
    ctx->pc = 0x21e240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
    // 0x21e244: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21e244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e24c: 0x8089e36  j           func_2278D8
    ctx->pc = 0x21E24Cu;
    ctx->pc = 0x21E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E24Cu;
    // 0x21e250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278D8u;
    sub_002278D8_0x2278d8(rdram, ctx, runtime); return;
    ctx->pc = 0x21E254u;
    // 0x21e254: 0x0  nop
    ctx->pc = 0x21e254u;
    // NOP
    // 0x21e258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e25c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x21e25cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e264: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21e264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e268: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e26c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x21e26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e274: 0x24841b70  addiu       $a0, $a0, 0x1B70
    ctx->pc = 0x21e274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
    // 0x21e278: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x21e278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e27c: 0x8089e5a  j           func_227968
    ctx->pc = 0x21E27Cu;
    ctx->pc = 0x21E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E27Cu;
    // 0x21e280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227968u, 0x21E27Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21E284u;
    // 0x21e284: 0x0  nop
    ctx->pc = 0x21e284u;
    // NOP
    // 0x21e288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e28c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21e28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e294: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e298: 0x24841b70  addiu       $a0, $a0, 0x1B70
    ctx->pc = 0x21e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
    // 0x21e29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e2a0: 0x8089e80  j           func_227A00
    ctx->pc = 0x21E2A0u;
    ctx->pc = 0x21E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2A0u;
    // 0x21e2a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    sub_00227A00_0x227a00(rdram, ctx, runtime); return;
    ctx->pc = 0x21E2A8u;
}
