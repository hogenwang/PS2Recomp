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

// Function: sub_002DF1D8
// Address: 0x2df1d8 - 0x2df240
void sub_002DF1D8_0x2df1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF1D8_0x2df1d8");
#endif

    switch (ctx->pc) {
        case 0x2df20cu: goto label_2df20c;
        case 0x2df23cu: goto label_2df23c;
        default: break;
    }

    ctx->pc = 0x2df1d8u;

    // 0x2df1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df1dc: 0x3c055851  lui         $a1, 0x5851
    ctx->pc = 0x2df1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22609 << 16));
    // 0x2df1e0: 0x34a5f42d  ori         $a1, $a1, 0xF42D
    ctx->pc = 0x2df1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62509);
    // 0x2df1e4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2df1e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2df1e8: 0x34a54c95  ori         $a1, $a1, 0x4C95
    ctx->pc = 0x2df1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19605);
    // 0x2df1ec: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2df1ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2df1f0: 0x34a57f2d  ori         $a1, $a1, 0x7F2D
    ctx->pc = 0x2df1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32557);
    // 0x2df1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df1f8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2df1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2df1fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2df1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2df200: 0x2610e118  addiu       $s0, $s0, -0x1EE8
    ctx->pc = 0x2df200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959384));
    // 0x2df204: 0xc048082  jal         func_120208
    ctx->pc = 0x2DF204u;
    SET_GPR_U32(ctx, 31, 0x2DF20Cu);
    ctx->pc = 0x2DF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF204u;
    // 0x2df208: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2DF204u, 0x2DF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF20Cu;
label_2df20c:
    // 0x2df20c: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x2df20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x2df210: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2df210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2df214: 0x64430001  daddiu      $v1, $v0, 0x1
    ctx->pc = 0x2df214u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2df218: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2df218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df21c: 0x3103e  dsrl32      $v0, $v1, 0
    ctx->pc = 0x2df21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2df220: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2df220u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2df224: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2df224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2df228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df22c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2df22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2df230: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2df230u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2df234: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF234u;
        // 0x2df238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF23Cu;
label_2df23c:
    // 0x2df23c: 0x0  nop
    ctx->pc = 0x2df23cu;
    // NOP
    if (ctx->pc == 0x2df23cu) { ctx->pc = 0x2df240u; }
}
