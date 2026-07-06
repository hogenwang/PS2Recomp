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

// Function: sub_001AEBC0
// Address: 0x1aebc0 - 0x1aec88
void sub_001AEBC0_0x1aebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEBC0_0x1aebc0");
#endif

    switch (ctx->pc) {
        case 0x1aebe8u: goto label_1aebe8;
        case 0x1aec34u: goto label_1aec34;
        case 0x1aec48u: goto label_1aec48;
        case 0x1aec5cu: goto label_1aec5c;
        default: break;
    }

    ctx->pc = 0x1aebc0u;

    // 0x1aebc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aebc4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1aebc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aebcc: 0x2463f810  addiu       $v1, $v1, -0x7F0
    ctx->pc = 0x1aebccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965264));
    // 0x1aebd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aebd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aebd8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1AEBD8u;
    {
        const bool branch_taken_0x1aebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBD8u;
        // 0x1aebdc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebd8) {
            ctx->pc = 0x1AEC78u;
            goto label_1aec78;
        }
    }
    ctx->pc = 0x1AEBE0u;
    // 0x1aebe0: 0xc06c162  jal         func_1B0588
    ctx->pc = 0x1AEBE0u;
    SET_GPR_U32(ctx, 31, 0x1AEBE8u);
    ctx->pc = 0x1B0588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0588u, 0x1AEBE0u, 0x1AEBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBE8u;
label_1aebe8:
    // 0x1aebe8: 0x3c0c0037  lui         $t4, 0x37
    ctx->pc = 0x1aebe8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)55 << 16));
    // 0x1aebec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aebecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aebf0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1aebf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aebf4: 0x3c0b0037  lui         $t3, 0x37
    ctx->pc = 0x1aebf4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)55 << 16));
    // 0x1aebf8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1aebfc: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1aebfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1aec00: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1aec00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1aec04: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1aec04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1aec08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aec08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec0c: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x1aec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x1aec10: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1aec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1aec14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aec18: 0xad8a01d0  sw          $t2, 0x1D0($t4)
    ctx->pc = 0x1aec18u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 464), GPR_U32(ctx, 10));
    // 0x1aec1c: 0xad6201cc  sw          $v0, 0x1CC($t3)
    ctx->pc = 0x1aec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 460), GPR_U32(ctx, 2));
    // 0x1aec20: 0xac6001c8  sw          $zero, 0x1C8($v1)
    ctx->pc = 0x1aec20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 0));
    // 0x1aec24: 0xace001c4  sw          $zero, 0x1C4($a3)
    ctx->pc = 0x1aec24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 452), GPR_U32(ctx, 0));
    // 0x1aec28: 0xad000098  sw          $zero, 0x98($t0)
    ctx->pc = 0x1aec28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 152), GPR_U32(ctx, 0));
    // 0x1aec2c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AEC2Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC34u);
    ctx->pc = 0x1AEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC2Cu;
    // 0x1aec30: 0xad2001c0  sw          $zero, 0x1C0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1AEC2Cu, 0x1AEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC34u;
label_1aec34:
    // 0x1aec34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aec34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aec38: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1aec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1aec3c: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x1aec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1aec40: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AEC40u;
    SET_GPR_U32(ctx, 31, 0x1AEC48u);
    ctx->pc = 0x1AEC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC40u;
    // 0x1aec44: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1AEC40u, 0x1AEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC48u;
label_1aec48:
    // 0x1aec48: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aec48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aec4c: 0x2484fc98  addiu       $a0, $a0, -0x368
    ctx->pc = 0x1aec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966424));
    // 0x1aec50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aec50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec54: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AEC54u;
    SET_GPR_U32(ctx, 31, 0x1AEC5Cu);
    ctx->pc = 0x1AEC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC54u;
    // 0x1aec58: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1AEC54u, 0x1AEC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC5Cu;
label_1aec5c:
    // 0x1aec5c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aec60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aec64: 0x2484f818  addiu       $a0, $a0, -0x7E8
    ctx->pc = 0x1aec64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965272));
    // 0x1aec68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aec68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec6c: 0x24060480  addiu       $a2, $zero, 0x480
    ctx->pc = 0x1aec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x1aec70: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1AEC70u;
    ctx->pc = 0x1AEC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC70u;
    // 0x1aec74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AEC78u;
label_1aec78:
    // 0x1aec78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aec7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC7Cu;
        // 0x1aec80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEC84u;
    // 0x1aec84: 0x0  nop
    ctx->pc = 0x1aec84u;
    // NOP
    if (ctx->pc == 0x1aec84u) { ctx->pc = 0x1aec88u; }
}
