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

// Function: sub_002F1F58
// Address: 0x2f1f58 - 0x2f2048
void sub_002F1F58_0x2f1f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1F58_0x2f1f58");
#endif

    switch (ctx->pc) {
        case 0x2f1f70u: goto label_2f1f70;
        case 0x2f2000u: goto label_2f2000;
        case 0x2f2010u: goto label_2f2010;
        case 0x2f2030u: goto label_2f2030;
        default: break;
    }

    ctx->pc = 0x2f1f58u;

    // 0x2f1f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1f5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f1f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1f68: 0xc0be428  jal         func_2F90A0
    ctx->pc = 0x2F1F68u;
    SET_GPR_U32(ctx, 31, 0x2F1F70u);
    ctx->pc = 0x2F1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F68u;
    // 0x2f1f6c: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F90A0u, 0x2F1F68u, 0x2F1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F70u;
label_2f1f70:
    // 0x2f1f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f74: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F1F74u;
    {
        const bool branch_taken_0x2f1f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F74u;
        // 0x2f1f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f74) {
            ctx->pc = 0x2F2034u;
            goto label_2f2034;
        }
    }
    ctx->pc = 0x2F1F7Cu;
    // 0x2f1f7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f1f80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f1f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1f84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f1f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1f88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f1f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f1f8c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x2f1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f1f90: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2f1f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f1f94: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x2f1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x2f1f98: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2f1f98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2f1f9c: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2f1f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x2f1fa0: 0x25070210  addiu       $a3, $t0, 0x210
    ctx->pc = 0x2f1fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 528));
    // 0x2f1fa4: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x2f1fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x2f1fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1fac: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x2f1facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x2f1fb0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f1fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2f1fb4: 0xae050040  sw          $a1, 0x40($s0)
    ctx->pc = 0x2f1fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    // 0x2f1fb8: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x2f1fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x2f1fbc: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2f1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x2f1fc0: 0xae05013c  sw          $a1, 0x13C($s0)
    ctx->pc = 0x2f1fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 5));
    // 0x2f1fc4: 0xae0500cc  sw          $a1, 0xCC($s0)
    ctx->pc = 0x2f1fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
    // 0x2f1fc8: 0xae0600b4  sw          $a2, 0xB4($s0)
    ctx->pc = 0x2f1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 6));
    // 0x2f1fcc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2f1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2f1fd0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2f1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2f1fd4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2f1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2f1fd8: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x2f1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x2f1fdc: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x2f1fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x2f1fe0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2f1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2f1fe4: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x2f1fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x2f1fe8: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2f1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2f1fec: 0xae05009c  sw          $a1, 0x9C($s0)
    ctx->pc = 0x2f1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 5));
    // 0x2f1ff0: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x2f1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x2f1ff4: 0x8d050210  lw          $a1, 0x210($t0)
    ctx->pc = 0x2f1ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 528)));
    // 0x2f1ff8: 0xc0bde92  jal         func_2F7A48
    ctx->pc = 0x2F1FF8u;
    SET_GPR_U32(ctx, 31, 0x2F2000u);
    ctx->pc = 0x2F1FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FF8u;
    // 0x2f1ffc: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7A48u, 0x2F1FF8u, 0x2F2000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2000u;
label_2f2000:
    // 0x2f2000: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2000u;
    {
        const bool branch_taken_0x2f2000 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2000u;
        // 0x2f2004: 0x3c020011  lui         $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2000) {
            ctx->pc = 0x2F2018u;
            goto label_2f2018;
        }
    }
    ctx->pc = 0x2F2008u;
    // 0x2f2008: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2008u;
    SET_GPR_U32(ctx, 31, 0x2F2010u);
    ctx->pc = 0x2F200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2008u;
    // 0x2f200c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F2008u, 0x2F2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2010u;
label_2f2010:
    // 0x2f2010: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2010u;
    {
        const bool branch_taken_0x2f2010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2010u;
        // 0x2f2014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2010) {
            ctx->pc = 0x2F2034u;
            goto label_2f2034;
        }
    }
    ctx->pc = 0x2F2018u;
label_2f2018:
    // 0x2f2018: 0x24422a28  addiu       $v0, $v0, 0x2A28
    ctx->pc = 0x2f2018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10792));
    // 0x2f201c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x2f201cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x2f2020: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x2f2020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2024: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x2f2024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x2f2028: 0xc0be7c2  jal         func_2F9F08
    ctx->pc = 0x2F2028u;
    SET_GPR_U32(ctx, 31, 0x2F2030u);
    ctx->pc = 0x2F202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2028u;
    // 0x2f202c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F08u, 0x2F2028u, 0x2F2030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2030u;
label_2f2030:
    // 0x2f2030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f2030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2034:
    // 0x2f2034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f2034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f203c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F203Cu;
        // 0x2f2040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2044u;
    // 0x2f2044: 0x0  nop
    ctx->pc = 0x2f2044u;
    // NOP
    if (ctx->pc == 0x2f2044u) { ctx->pc = 0x2f2048u; }
}
