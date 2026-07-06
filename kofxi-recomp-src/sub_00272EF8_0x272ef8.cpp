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

// Function: sub_00272EF8
// Address: 0x272ef8 - 0x2736d8
void sub_00272EF8_0x272ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272EF8_0x272ef8");
#endif

    switch (ctx->pc) {
        case 0x272f40u: goto label_272f40;
        case 0x272f60u: goto label_272f60;
        case 0x272f78u: goto label_272f78;
        case 0x272f8cu: goto label_272f8c;
        case 0x272ff0u: goto label_272ff0;
        case 0x27306cu: goto label_27306c;
        case 0x273098u: goto label_273098;
        case 0x2730bcu: goto label_2730bc;
        case 0x2730c4u: goto label_2730c4;
        case 0x2730e4u: goto label_2730e4;
        case 0x273100u: goto label_273100;
        case 0x273120u: goto label_273120;
        case 0x273168u: goto label_273168;
        case 0x27317cu: goto label_27317c;
        case 0x2731a4u: goto label_2731a4;
        case 0x2731ccu: goto label_2731cc;
        case 0x2731f4u: goto label_2731f4;
        case 0x27321cu: goto label_27321c;
        case 0x273244u: goto label_273244;
        case 0x27326cu: goto label_27326c;
        case 0x273298u: goto label_273298;
        case 0x273314u: goto label_273314;
        case 0x273338u: goto label_273338;
        case 0x2733e0u: goto label_2733e0;
        case 0x2733f4u: goto label_2733f4;
        case 0x273414u: goto label_273414;
        case 0x27344cu: goto label_27344c;
        case 0x27346cu: goto label_27346c;
        case 0x273498u: goto label_273498;
        case 0x2734d0u: goto label_2734d0;
        case 0x2734e8u: goto label_2734e8;
        case 0x27351cu: goto label_27351c;
        case 0x273538u: goto label_273538;
        case 0x273578u: goto label_273578;
        case 0x273580u: goto label_273580;
        case 0x273594u: goto label_273594;
        case 0x2735b0u: goto label_2735b0;
        case 0x2735ccu: goto label_2735cc;
        case 0x2735e8u: goto label_2735e8;
        case 0x273604u: goto label_273604;
        case 0x273620u: goto label_273620;
        case 0x27363cu: goto label_27363c;
        case 0x273658u: goto label_273658;
        case 0x273674u: goto label_273674;
        case 0x27367cu: goto label_27367c;
        case 0x273698u: goto label_273698;
        case 0x2736a0u: goto label_2736a0;
        default: break;
    }

    ctx->pc = 0x272ef8u;

label_272ef8:
    // 0x272ef8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x272ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x272efc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x272efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x272f00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x272f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f04: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x272f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x272f08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x272f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f0c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x272f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x272f10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x272f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x272f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f18: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x272f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x272f1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f20: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x272f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x272f24: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x272f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x272f28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x272f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f2c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x272f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f30: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x272f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x272f34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x272f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x272f38: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x272F38u;
    SET_GPR_U32(ctx, 31, 0x272F40u);
    ctx->pc = 0x272F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F38u;
    // 0x272f3c: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x272F38u, 0x272F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F40u;
label_272f40:
    // 0x272f40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f44: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x272f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x272f48: 0xafb40004  sw          $s4, 0x4($sp)
    ctx->pc = 0x272f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
    // 0x272f4c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x272f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x272f50: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x272f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x272f54: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x272f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x272f58: 0xc043298  jal         func_10CA60
    ctx->pc = 0x272F58u;
    SET_GPR_U32(ctx, 31, 0x272F60u);
    ctx->pc = 0x272F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F58u;
    // 0x272f5c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x272F58u, 0x272F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F60u;
label_272f60:
    // 0x272f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x272f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f68: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x272F68u;
    {
        const bool branch_taken_0x272f68 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x272F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F68u;
        // 0x272f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f68) {
            ctx->pc = 0x272F9Cu;
            goto label_272f9c;
        }
    }
    ctx->pc = 0x272F70u;
    // 0x272f70: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x272F70u;
    SET_GPR_U32(ctx, 31, 0x272F78u);
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x272F70u, 0x272F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F78u;
label_272f78:
    // 0x272f78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x272f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f7c: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x272F7Cu;
    {
        const bool branch_taken_0x272f7c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x272F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F7Cu;
        // 0x272f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f7c) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272F84u;
    // 0x272f84: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x272F84u;
    SET_GPR_U32(ctx, 31, 0x272F8Cu);
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x272F84u, 0x272F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F8Cu;
label_272f8c:
    // 0x272f8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272F8Cu;
    {
        const bool branch_taken_0x272f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F8Cu;
        // 0x272f90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272f8c) {
            ctx->pc = 0x272F9Cu;
            goto label_272f9c;
        }
    }
    ctx->pc = 0x272F94u;
    // 0x272f94: 0x0  nop
    ctx->pc = 0x272f94u;
    // NOP
label_272f98:
    // 0x272f98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x272f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272f9c:
    // 0x272f9c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x272f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272fa0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x272fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x272fa4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x272fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x272fa8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x272fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x272fac: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x272facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x272fb0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x272fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x272fb4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x272fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x272fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x272FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FB8u;
        // 0x272fbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272FC0u;
    // 0x272fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272fc4: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x272fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x272fc8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272FC8u;
    {
        const bool branch_taken_0x272fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FC8u;
        // 0x272fcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272fc8) {
            ctx->pc = 0x272FE0u;
            goto label_272fe0;
        }
    }
    ctx->pc = 0x272FD0u;
    // 0x272fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272fd4: 0x80b8fda  j           func_2E3F68
    ctx->pc = 0x272FD4u;
    ctx->pc = 0x272FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272FD4u;
    // 0x272fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F68u, 0x272FD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x272FDCu;
    // 0x272fdc: 0x0  nop
    ctx->pc = 0x272fdcu;
    // NOP
label_272fe0:
    // 0x272fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x272FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FE4u;
        // 0x272fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272FECu;
    // 0x272fec: 0x0  nop
    ctx->pc = 0x272fecu;
    // NOP
label_272ff0:
    // 0x272ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x272ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x272ff4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x272ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x272ff8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x272ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x272ffc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x272ffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273000: 0x2683041f  addiu       $v1, $s4, 0x41F
    ctx->pc = 0x273000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1055));
    // 0x273004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x273004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273008: 0x2c630420  sltiu       $v1, $v1, 0x420
    ctx->pc = 0x273008u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1056) ? 1 : 0);
    // 0x27300c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27300cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x273010: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x273010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x273014: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x273014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273018: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x273018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x27301c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x27301cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273020: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x273020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x273024: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x273024u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x273028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27302c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27302cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273030: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x273030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x273034: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x273034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273038: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x273038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x27303c: 0x10600199  beqz        $v1, . + 4 + (0x199 << 2)
    ctx->pc = 0x27303Cu;
    {
        const bool branch_taken_0x27303c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27303Cu;
        // 0x273040: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27303c) {
            ctx->pc = 0x2736A4u;
            goto label_2736a4;
        }
    }
    ctx->pc = 0x273044u;
    // 0x273044: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x273044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x273048: 0x8c832d74  lw          $v1, 0x2D74($a0)
    ctx->pc = 0x273048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11636)));
    // 0x27304c: 0x1c600195  bgtz        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x27304Cu;
    {
        const bool branch_taken_0x27304c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x273050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27304Cu;
        // 0x273050: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27304c) {
            ctx->pc = 0x2736A4u;
            goto label_2736a4;
        }
    }
    ctx->pc = 0x273054u;
    // 0x273054: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x273054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x273058: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x27305c: 0x14830191  bne         $a0, $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x27305Cu;
    {
        const bool branch_taken_0x27305c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x273060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27305Cu;
        // 0x273060: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27305c) {
            ctx->pc = 0x2736A4u;
            goto label_2736a4;
        }
    }
    ctx->pc = 0x273064u;
    // 0x273064: 0xc09ec24  jal         func_27B090
    ctx->pc = 0x273064u;
    SET_GPR_U32(ctx, 31, 0x27306Cu);
    ctx->pc = 0x27B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B090u, 0x273064u, 0x27306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27306Cu;
label_27306c:
    // 0x27306c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27306Cu;
    {
        const bool branch_taken_0x27306c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x273070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27306Cu;
        // 0x273070: 0x3c17003a  lui         $s7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27306c) {
            ctx->pc = 0x273080u;
            goto label_273080;
        }
    }
    ctx->pc = 0x273074u;
    // 0x273074: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x273074u;
    {
        const bool branch_taken_0x273074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273074u;
        // 0x273078: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273074) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x27307Cu;
    // 0x27307c: 0x0  nop
    ctx->pc = 0x27307cu;
    // NOP
label_273080:
    // 0x273080: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x273084: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x273084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273088: 0x26e62d78  addiu       $a2, $s7, 0x2D78
    ctx->pc = 0x273088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 11640));
    // 0x27308c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273090: 0x34a5073f  ori         $a1, $a1, 0x73F
    ctx->pc = 0x273090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1855);
    // 0x273094: 0x0  nop
    ctx->pc = 0x273094u;
    // NOP
label_273098:
    // 0x273098: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x273098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x27309c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2730a0: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x2730a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2730a4: 0x0  nop
    ctx->pc = 0x2730a4u;
    // NOP
    // 0x2730a8: 0x0  nop
    ctx->pc = 0x2730a8u;
    // NOP
    // 0x2730ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2730ACu;
    {
        const bool branch_taken_0x2730ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730ACu;
        // 0x2730b0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730ac) {
            ctx->pc = 0x273098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273098;
        }
    }
    ctx->pc = 0x2730B4u;
    // 0x2730b4: 0xc09d17e  jal         func_2745F8
    ctx->pc = 0x2730B4u;
    SET_GPR_U32(ctx, 31, 0x2730BCu);
    ctx->pc = 0x2730B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730B4u;
    // 0x2730b8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2745F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2745F8u, 0x2730B4u, 0x2730BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730BCu;
label_2730bc:
    // 0x2730bc: 0xc09d1c0  jal         func_274700
    ctx->pc = 0x2730BCu;
    SET_GPR_U32(ctx, 31, 0x2730C4u);
    ctx->pc = 0x2730C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730BCu;
    // 0x2730c0: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274700u, 0x2730BCu, 0x2730C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730C4u;
label_2730c4:
    // 0x2730c4: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2730C4u;
    {
        const bool branch_taken_0x2730c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730C4u;
        // 0x2730c8: 0x26642d78  addiu       $a0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730c4) {
            ctx->pc = 0x2730F0u;
            goto label_2730f0;
        }
    }
    ctx->pc = 0x2730CCu;
    // 0x2730cc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2730ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2730d0: 0x2c820e11  sltiu       $v0, $a0, 0xE11
    ctx->pc = 0x2730d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3601) ? 1 : 0);
    // 0x2730d4: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x2730D4u;
    {
        const bool branch_taken_0x2730d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2730D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730D4u;
        // 0x2730d8: 0x2411fff6  addiu       $s1, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730d4) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x2730DCu;
    // 0x2730dc: 0xc046278  jal         func_1189E0
    ctx->pc = 0x2730DCu;
    SET_GPR_U32(ctx, 31, 0x2730E4u);
    ctx->pc = 0x2730E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730DCu;
    // 0x2730e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189E0u, 0x2730DCu, 0x2730E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730E4u;
label_2730e4:
    // 0x2730e4: 0x26632d78  addiu       $v1, $s3, 0x2D78
    ctx->pc = 0x2730e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
    // 0x2730e8: 0xfc620410  sd          $v0, 0x410($v1)
    ctx->pc = 0x2730e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 1040), GPR_U64(ctx, 2));
    // 0x2730ec: 0x26642d78  addiu       $a0, $s3, 0x2D78
    ctx->pc = 0x2730ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
label_2730f0:
    // 0x2730f0: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2730F0u;
    {
        const bool branch_taken_0x2730f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2730F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2730F0u;
        // 0x2730f4: 0xac900428  sw          $s0, 0x428($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2730f0) {
            ctx->pc = 0x273118u;
            goto label_273118;
        }
    }
    ctx->pc = 0x2730F8u;
    // 0x2730f8: 0xc0b6878  jal         func_2DA1E0
    ctx->pc = 0x2730F8u;
    SET_GPR_U32(ctx, 31, 0x273100u);
    ctx->pc = 0x2730FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730F8u;
    // 0x2730fc: 0x24840434  addiu       $a0, $a0, 0x434 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1E0u, 0x2730F8u, 0x273100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273100u;
label_273100:
    // 0x273100: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x273100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273104: 0x6230009  bgezl       $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x273104u;
    {
        const bool branch_taken_0x273104 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x273104) {
            ctx->pc = 0x273108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273104u;
            // 0x273108: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27312Cu;
            goto label_27312c;
        }
    }
    ctx->pc = 0x27310Cu;
    // 0x27310c: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x27310Cu;
    {
        const bool branch_taken_0x27310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27310Cu;
        // 0x273110: 0x26f02d78  addiu       $s0, $s7, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27310c) {
            ctx->pc = 0x273564u;
            goto label_273564;
        }
    }
    ctx->pc = 0x273114u;
    // 0x273114: 0x0  nop
    ctx->pc = 0x273114u;
    // NOP
label_273118:
    // 0x273118: 0xc0b6828  jal         func_2DA0A0
    ctx->pc = 0x273118u;
    SET_GPR_U32(ctx, 31, 0x273120u);
    ctx->pc = 0x27311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273118u;
    // 0x27311c: 0x24840434  addiu       $a0, $a0, 0x434 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA0A0u, 0x273118u, 0x273120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273120u;
label_273120:
    // 0x273120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x273120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273124: 0x620010e  bltz        $s1, . + 4 + (0x10E << 2)
    ctx->pc = 0x273124u;
    {
        const bool branch_taken_0x273124 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x273128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273124u;
        // 0x273128: 0x26702d78  addiu       $s0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273124) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x27312Cu;
label_27312c:
    // 0x27312c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x27312cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x273130: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x273130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x273134: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x273134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273138: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x273138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x27313c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x27313cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x273140: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x273140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x273144: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273148: 0x34840710  ori         $a0, $a0, 0x710
    ctx->pc = 0x273148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1808);
    // 0x27314c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273150: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x273150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x273154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x273154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x273158: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x27315c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x27315cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x273160: 0xc09ef9a  jal         func_27BE68
    ctx->pc = 0x273160u;
    SET_GPR_U32(ctx, 31, 0x273168u);
    ctx->pc = 0x273164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273160u;
    // 0x273164: 0xfc220688  sd          $v0, 0x688($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE68u, 0x273160u, 0x273168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273168u;
label_273168:
    // 0x273168: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x273168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x27316c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273170: 0x24c69e78  addiu       $a2, $a2, -0x6188
    ctx->pc = 0x273170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942328));
    // 0x273174: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x273174u;
    SET_GPR_U32(ctx, 31, 0x27317Cu);
    ctx->pc = 0x273178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273174u;
    // 0x273178: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x273174u, 0x27317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27317Cu;
label_27317c:
    // 0x27317c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x27317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273180: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273180u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x273184: 0xac2206bc  sw          $v0, 0x6BC($at)
    ctx->pc = 0x273184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1724), GPR_U32(ctx, 2));
    // 0x273188: 0x44000f5  bltz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x273188u;
    {
        const bool branch_taken_0x273188 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273188u;
        // 0x27318c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273188) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273190u;
    // 0x273190: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x273190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x273194: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x273194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273198: 0x24c69e90  addiu       $a2, $a2, -0x6170
    ctx->pc = 0x273198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942352));
    // 0x27319c: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x27319Cu;
    SET_GPR_U32(ctx, 31, 0x2731A4u);
    ctx->pc = 0x2731A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27319Cu;
    // 0x2731a0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x27319Cu, 0x2731A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731A4u;
label_2731a4:
    // 0x2731a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2731a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2731a8: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2731a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2731ac: 0xac2206c0  sw          $v0, 0x6C0($at)
    ctx->pc = 0x2731acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1728), GPR_U32(ctx, 2));
    // 0x2731b0: 0x44000eb  bltz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x2731B0u;
    {
        const bool branch_taken_0x2731b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2731B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731B0u;
        // 0x2731b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731b0) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x2731B8u;
    // 0x2731b8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2731b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2731bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2731bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731c0: 0x24c69ea8  addiu       $a2, $a2, -0x6158
    ctx->pc = 0x2731c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942376));
    // 0x2731c4: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x2731C4u;
    SET_GPR_U32(ctx, 31, 0x2731CCu);
    ctx->pc = 0x2731C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2731C4u;
    // 0x2731c8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x2731C4u, 0x2731CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731CCu;
label_2731cc:
    // 0x2731cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2731ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2731d0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2731d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2731d4: 0xac2206c4  sw          $v0, 0x6C4($at)
    ctx->pc = 0x2731d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1732), GPR_U32(ctx, 2));
    // 0x2731d8: 0x44000e1  bltz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2731D8u;
    {
        const bool branch_taken_0x2731d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2731DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731D8u;
        // 0x2731dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731d8) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x2731E0u;
    // 0x2731e0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2731e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2731e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2731e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2731e8: 0x24c69ec0  addiu       $a2, $a2, -0x6140
    ctx->pc = 0x2731e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942400));
    // 0x2731ec: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x2731ECu;
    SET_GPR_U32(ctx, 31, 0x2731F4u);
    ctx->pc = 0x2731F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2731ECu;
    // 0x2731f0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x2731ECu, 0x2731F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731F4u;
label_2731f4:
    // 0x2731f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2731f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2731f8: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2731f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2731fc: 0xac2206c8  sw          $v0, 0x6C8($at)
    ctx->pc = 0x2731fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1736), GPR_U32(ctx, 2));
    // 0x273200: 0x44000d7  bltz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x273200u;
    {
        const bool branch_taken_0x273200 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x273204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273200u;
        // 0x273204: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273200) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273208u;
    // 0x273208: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x273208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x27320c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273210: 0x24c69ed8  addiu       $a2, $a2, -0x6128
    ctx->pc = 0x273210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942424));
    // 0x273214: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x273214u;
    SET_GPR_U32(ctx, 31, 0x27321Cu);
    ctx->pc = 0x273218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273214u;
    // 0x273218: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x273214u, 0x27321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27321Cu;
label_27321c:
    // 0x27321c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x27321cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273220: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273220u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x273224: 0xac2206cc  sw          $v0, 0x6CC($at)
    ctx->pc = 0x273224u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1740), GPR_U32(ctx, 2));
    // 0x273228: 0x44000cd  bltz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x273228u;
    {
        const bool branch_taken_0x273228 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273228u;
        // 0x27322c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273228) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273230u;
    // 0x273230: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x273230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x273234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x273234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273238: 0x24c69ef0  addiu       $a2, $a2, -0x6110
    ctx->pc = 0x273238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942448));
    // 0x27323c: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x27323Cu;
    SET_GPR_U32(ctx, 31, 0x273244u);
    ctx->pc = 0x273240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27323Cu;
    // 0x273240: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x27323Cu, 0x273244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273244u;
label_273244:
    // 0x273244: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273248: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273248u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x27324c: 0xac2206d0  sw          $v0, 0x6D0($at)
    ctx->pc = 0x27324cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1744), GPR_U32(ctx, 2));
    // 0x273250: 0x44000c3  bltz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x273250u;
    {
        const bool branch_taken_0x273250 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x273254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273250u;
        // 0x273254: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273250) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273258u;
    // 0x273258: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x273258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x27325c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273260: 0x24c69f08  addiu       $a2, $a2, -0x60F8
    ctx->pc = 0x273260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942472));
    // 0x273264: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x273264u;
    SET_GPR_U32(ctx, 31, 0x27326Cu);
    ctx->pc = 0x273268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273264u;
    // 0x273268: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x273264u, 0x27326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27326Cu;
label_27326c:
    // 0x27326c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x27326cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273270: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273270u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x273274: 0xac2206d4  sw          $v0, 0x6D4($at)
    ctx->pc = 0x273274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1748), GPR_U32(ctx, 2));
    // 0x273278: 0x44000b9  bltz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x273278u;
    {
        const bool branch_taken_0x273278 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273278u;
        // 0x27327c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273278) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273280u;
    // 0x273280: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x273280u;
    {
        const bool branch_taken_0x273280 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x273284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273280u;
        // 0x273284: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273280) {
            ctx->pc = 0x2732ACu;
            goto label_2732ac;
        }
    }
    ctx->pc = 0x273288u;
    // 0x273288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x273288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27328c: 0x24c69f20  addiu       $a2, $a2, -0x60E0
    ctx->pc = 0x27328cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942496));
    // 0x273290: 0xc09cba6  jal         func_272E98
    ctx->pc = 0x273290u;
    SET_GPR_U32(ctx, 31, 0x273298u);
    ctx->pc = 0x273294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273290u;
    // 0x273294: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272E98u, 0x273290u, 0x273298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273298u;
label_273298:
    // 0x273298: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x27329c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x27329cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2732a0: 0xac2206d8  sw          $v0, 0x6D8($at)
    ctx->pc = 0x2732a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1752), GPR_U32(ctx, 2));
    // 0x2732a4: 0x44000ae  bltz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2732A4u;
    {
        const bool branch_taken_0x2732a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2732A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732A4u;
        // 0x2732a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732a4) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x2732ACu;
label_2732ac:
    // 0x2732ac: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2732ACu;
    {
        const bool branch_taken_0x2732ac = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2732B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732ACu;
        // 0x2732b0: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732ac) {
            ctx->pc = 0x2732C0u;
            goto label_2732c0;
        }
    }
    ctx->pc = 0x2732B4u;
    // 0x2732b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2732b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2732b8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2732b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2732bc: 0xac360734  sw          $s6, 0x734($at)
    ctx->pc = 0x2732bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1844), GPR_U32(ctx, 22));
label_2732c0:
    // 0x2732c0: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2732C0u;
    {
        const bool branch_taken_0x2732c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732C0u;
        // 0x2732c4: 0x26622d78  addiu       $v0, $s3, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732c0) {
            ctx->pc = 0x2732D4u;
            goto label_2732d4;
        }
    }
    ctx->pc = 0x2732C8u;
    // 0x2732c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2732c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2732cc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2732ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2732d0: 0xac340738  sw          $s4, 0x738($at)
    ctx->pc = 0x2732d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1848), GPR_U32(ctx, 20));
label_2732d4:
    // 0x2732d4: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x2732d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
    // 0x2732d8: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x2732d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
    // 0x2732dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2732dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2732e0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2732e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2732e4: 0xac20073c  sw          $zero, 0x73C($at)
    ctx->pc = 0x2732e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1852), GPR_U32(ctx, 0));
    // 0x2732e8: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x2732e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x2732ec: 0x24633334  addiu       $v1, $v1, 0x3334
    ctx->pc = 0x2732ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13108));
    // 0x2732f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2732f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2732f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2732F4u;
    {
        const bool branch_taken_0x2732f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2732f4) {
            ctx->pc = 0x273314u;
            goto label_273314;
        }
    }
    ctx->pc = 0x2732FCu;
    // 0x2732fc: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2732fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x273300: 0x24843348  addiu       $a0, $a0, 0x3348
    ctx->pc = 0x273300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13128));
    // 0x273304: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x273304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x273308: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x273308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27330c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27330Cu;
    SET_GPR_U32(ctx, 31, 0x273314u);
    ctx->pc = 0x273310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27330Cu;
    // 0x273310: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27330Cu, 0x273314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273314u;
label_273314:
    // 0x273314: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x273314u;
    {
        const bool branch_taken_0x273314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273314) {
            ctx->pc = 0x273348u;
            goto label_273348;
        }
    }
    ctx->pc = 0x27331Cu;
    // 0x27331c: 0xfed762aa  sd          $s7, 0x62AA($s6)
    ctx->pc = 0x27331cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 25258), GPR_U64(ctx, 23));
    // 0x273320: 0x2632c000  addiu       $s2, $s1, -0x4000
    ctx->pc = 0x273320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950912));
    // 0x273324: 0xdfc9e987  ld          $t1, -0x1679($fp)
    ctx->pc = 0x273324u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 30), 4294961543)));
    // 0x273328: 0x1321020  add         $v0, $t1, $s2
    ctx->pc = 0x273328u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x27332c: 0x26538f68  addiu       $s3, $s2, -0x7098
    ctx->pc = 0x27332cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938472));
    // 0x273330: 0xc167079  jal         func_59C1E4
    ctx->pc = 0x273330u;
    SET_GPR_U32(ctx, 31, 0x273338u);
    ctx->pc = 0x59C1E4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x59C1E4u, 0x273330u, 0x273338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273338u;
label_273338:
    // 0x273338: 0x41ea5b1e  .word       0x41EA5B1E                   # INVALID     $t7, $t2, 0x5B1E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x273338u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x273338 raw=0x41EA5B1E");
    // 0x27333c: 0x970e64c8  lhu         $t6, 0x64C8($t8)
    ctx->pc = 0x27333cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 25800)));
    // 0x273340: 0x41ea5bb2  .word       0x41EA5BB2                   # INVALID     $t7, $t2, 0x5BB2 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x273340u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x273340 raw=0x41EA5BB2");
    // 0x273344: 0x0  nop
    ctx->pc = 0x273344u;
    // NOP
label_273348:
    // 0x273348: 0x6e9377e2  ldr         $s3, 0x77E2($s4)
    ctx->pc = 0x273348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 30690); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x27334c: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x27334cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x273350: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x273350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x273354: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x273354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x273358: 0xc0bef96e  ll          $fp, -0x692($a1)
    ctx->pc = 0x273358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294965614); SET_GPR_S32(ctx, 30, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x27335c: 0x63543ba7  daddi       $s4, $k0, 0x3BA7
    ctx->pc = 0x27335cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)15271; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x273360: 0x4317d92e  .word       0x4317D92E                   # INVALID     $t8, $s7, -0x26D2 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x273360u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x273360 raw=0x4317D92E");
    // 0x273364: 0xe05c78e7  sc          $gp, 0x78E7($v0)
    ctx->pc = 0x273364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 30951); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x273368: 0xe0be3b8d  sc          $fp, 0x3B8D($a1)
    ctx->pc = 0x273368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15245); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 30)); SET_GPR_S32(ctx, 30, 1); } else { SET_GPR_S32(ctx, 30, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27336c: 0x831e38cc  lb          $fp, 0x38CC($t8)
    ctx->pc = 0x27336cu;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 14540)));
    // 0x273370: 0x235fdb07  addi        $ra, $k0, -0x24F9
    ctx->pc = 0x273370u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 26), (int32_t)4294957831, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
    // 0x273374: 0x6e9ef5e2  ldr         $fp, -0xA1E($s4)
    ctx->pc = 0x273374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294964706); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 30, (GPR_U64(ctx, 30) & keepMask) | (mem >> shift)); }
    // 0x273378: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x273378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x27337c: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x27337cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x273380: 0x24633358  addiu       $v1, $v1, 0x3358
    ctx->pc = 0x273380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13144));
    // 0x273384: 0x6e9397e2  ldr         $s3, -0x681E($s4)
    ctx->pc = 0x273384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294940642); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x273388: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x273388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x27338c: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x27338cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x273390: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x273390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x273394: 0x48fc93ec  .word       0x48FC93EC                   # INVALID     $a3, $gp, -0x6C14 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x273394u;
    throw std::runtime_error("Unhandled COP2 format: 0x7 at 0x273394 raw=0x48FC93EC");
    // 0x273398: 0xa0d7d0ef  sb          $s7, -0x2F11($a2)
    ctx->pc = 0x273398u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294955247), (uint8_t)GPR_U32(ctx, 23));
    // 0x27339c: 0x25e9bcf  .word       0x025E9BCF                   # sync # 025E9800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27339cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2733a0: 0x4397d96c  .word       0x4397D96C                   # INVALID     $gp, $s7, -0x2694 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2733a0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x2733A0 raw=0x4397D96C");
    // 0x2733a4: 0x40fd396c  .word       0x40FD396C                   # INVALID     $a3, $sp, 0x396C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2733a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x2733A4 raw=0x40FD396C");
    // 0x2733a8: 0xa3bc980f  sb          $gp, -0x67F1($sp)
    ctx->pc = 0x2733a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294940687), (uint8_t)GPR_U32(ctx, 28));
    // 0x2733ac: 0x8077d9af  lb          $s7, -0x2651($v1)
    ctx->pc = 0x2733acu;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957487)));
    // 0x2733b0: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x2733b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2733b4: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x2733b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2733b8: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x2733b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2733bc: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x2733bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x2733c0: 0x24a53394  addiu       $a1, $a1, 0x3394
    ctx->pc = 0x2733c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13204));
    // 0x2733c4: 0xee9232a2  .word       0xEE9232A2                   # INVALID     $s4, $s2, 0x32A2 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2733c4u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2733C4 raw=0xEE9232A2");
    // 0x2733c8: 0x649635e0  daddiu      $s6, $a0, 0x35E0
    ctx->pc = 0x2733c8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)13792);
    // 0x2733cc: 0xe67484a2  swc1        $f20, -0x7B5E($s3)
    ctx->pc = 0x2733ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294935714), bits); }
    // 0x2733d0: 0x6692b6e2  daddiu      $s2, $s4, -0x491E
    ctx->pc = 0x2733d0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4294948578);
    // 0x2733d4: 0x2e97b5e6  sltiu       $s7, $s4, -0x4A1A
    ctx->pc = 0x2733d4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4294948326) ? 1 : 0);
    // 0x2733d8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2733D8u;
    SET_GPR_U32(ctx, 31, 0x2733E0u);
    ctx->pc = 0x2733DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733D8u;
    // 0x2733dc: 0xeed21122  .word       0xEED21122                   # INVALID     $s6, $s2, 0x1122 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2733DC raw=0xEED21122");
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2733D8u, 0x2733E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733E0u;
label_2733e0:
    // 0x2733e0: 0x6e9297e2  ldr         $s2, -0x681E($s4)
    ctx->pc = 0x2733e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294940642); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2733e4: 0x6e9215e2  ldr         $s2, 0x15E2($s4)
    ctx->pc = 0x2733e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 5602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2733e8: 0x6297b5e7  daddi       $s7, $s4, -0x4A19
    ctx->pc = 0x2733e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 20); int64_t imm = (int64_t)(int32_t)4294948327; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
    // 0x2733ec: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2733ECu;
    SET_GPR_U32(ctx, 31, 0x2733F4u);
    ctx->pc = 0x2733F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733ECu;
    // 0x2733f0: 0xeed21122  .word       0xEED21122                   # INVALID     $s6, $s2, 0x1122 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2733F0 raw=0xEED21122");
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2733ECu, 0x2733F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733F4u;
label_2733f4:
    // 0x2733f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2733F4u;
    {
        const bool branch_taken_0x2733f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733f4) {
            ctx->pc = 0x273424u;
            goto label_273424;
        }
    }
    ctx->pc = 0x2733FCu;
    // 0x2733fc: 0x24505b80  addiu       $s0, $v0, 0x5B80
    ctx->pc = 0x2733fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23424));
    // 0x273400: 0x20a1020  add         $v0, $s0, $t2
    ctx->pc = 0x273400u;
    {     int32_t rs_val = GPR_S32(ctx, 16);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x273404: 0xdf30107f  ld          $s0, 0x107F($t9)
    ctx->pc = 0x273404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 25), 4223)));
    // 0x273408: 0xfde27f92  sd          $v0, 0x7F92($t7)
    ctx->pc = 0x273408u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32658), GPR_U64(ctx, 2));
    // 0x27340c: 0xc196978  jal         func_65A5E0
    ctx->pc = 0x27340Cu;
    SET_GPR_U32(ctx, 31, 0x273414u);
    ctx->pc = 0x273410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27340Cu;
    // 0x273410: 0xdda66a47  ld          $a2, 0x6A47($t5) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 13), 27207)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x65A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x65A5E0u, 0x27340Cu, 0x273414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273414u;
label_273414:
    // 0x273414: 0x41eae1b5  .word       0x41EAE1B5                   # INVALID     $t7, $t2, -0x1E4B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x273414u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x273414 raw=0x41EAE1B5");
    // 0x273418: 0x970e64c9  lhu         $t6, 0x64C9($t8)
    ctx->pc = 0x273418u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 25801)));
    // 0x27341c: 0x41eae119  .word       0x41EAE119                   # INVALID     $t7, $t2, -0x1EE7 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27341cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x27341C raw=0x41EAE119");
    // 0x273420: 0x0  nop
    ctx->pc = 0x273420u;
    // NOP
label_273424:
    // 0x273424: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x273424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x273428: 0x24423414  addiu       $v0, $v0, 0x3414
    ctx->pc = 0x273428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13332));
    // 0x27342c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27342cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x273430: 0x248433f4  addiu       $a0, $a0, 0x33F4
    ctx->pc = 0x273430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13300));
    // 0x273434: 0x2411ff95  addiu       $s1, $zero, -0x6B
    ctx->pc = 0x273434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
    // 0x273438: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x273438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27343c: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x27343cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
    // 0x273440: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x273440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x273444: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x273444u;
    SET_GPR_U32(ctx, 31, 0x27344Cu);
    ctx->pc = 0x273448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273444u;
    // 0x273448: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x273444u, 0x27344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27344Cu;
label_27344c:
    // 0x27344c: 0x3c0201c2  lui         $v0, 0x1C2
    ctx->pc = 0x27344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)450 << 16));
    // 0x273450: 0x3c0301c2  lui         $v1, 0x1C2
    ctx->pc = 0x273450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)450 << 16));
    // 0x273454: 0x3c0701c3  lui         $a3, 0x1C3
    ctx->pc = 0x273454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)451 << 16));
    // 0x273458: 0x24423ae0  addiu       $v0, $v0, 0x3AE0
    ctx->pc = 0x273458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15072));
    // 0x27345c: 0x24633ee0  addiu       $v1, $v1, 0x3EE0
    ctx->pc = 0x27345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16096));
    // 0x273460: 0x24e7bf18  addiu       $a3, $a3, -0x40E8
    ctx->pc = 0x273460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950680));
    // 0x273464: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273468: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273468u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_27346c:
    // 0x27346c: 0xac22069c  sw          $v0, 0x69C($at)
    ctx->pc = 0x27346cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1692), GPR_U32(ctx, 2));
    // 0x273470: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273474: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273474u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x273478: 0xac2306a4  sw          $v1, 0x6A4($at)
    ctx->pc = 0x273478u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1700), GPR_U32(ctx, 3));
    // 0x27347c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273480: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273484: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273484u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x273488: 0xac2706ac  sw          $a3, 0x6AC($at)
    ctx->pc = 0x273488u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1708), GPR_U32(ctx, 7));
    // 0x27348c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27348cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273490: 0xc09c792  jal         func_271E48
    ctx->pc = 0x273490u;
    SET_GPR_U32(ctx, 31, 0x273498u);
    ctx->pc = 0x273494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273490u;
    // 0x273494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271E48u, 0x273490u, 0x273498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273498u;
label_273498:
    // 0x273498: 0x4420032  bltzl       $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x273498u;
    {
        const bool branch_taken_0x273498 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x273498) {
            ctx->pc = 0x27349Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273498u;
            // 0x27349c: 0x26f02d78  addiu       $s0, $s7, 0x2D78 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 11640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273564u;
            goto label_273564;
        }
    }
    ctx->pc = 0x2734A0u;
    // 0x2734a0: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2734A0u;
    {
        const bool branch_taken_0x2734a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734A0u;
        // 0x2734a4: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734a0) {
            ctx->pc = 0x2734DCu;
            goto label_2734dc;
        }
    }
    ctx->pc = 0x2734A8u;
    // 0x2734a8: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x2734a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x2734ac: 0x24a54350  addiu       $a1, $a1, 0x4350
    ctx->pc = 0x2734acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17232));
    // 0x2734b0: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2734b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x2734b4: 0xae050424  sw          $a1, 0x424($s0)
    ctx->pc = 0x2734b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 5));
    // 0x2734b8: 0x24842510  addiu       $a0, $a0, 0x2510
    ctx->pc = 0x2734b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9488));
    // 0x2734bc: 0x25299f38  addiu       $t1, $t1, -0x60C8
    ctx->pc = 0x2734bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942520));
    // 0x2734c0: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2734c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2734c4: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x2734c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2734c8: 0xc09cbbe  jal         func_272EF8
    ctx->pc = 0x2734C8u;
    SET_GPR_U32(ctx, 31, 0x2734D0u);
    ctx->pc = 0x2734CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2734C8u;
    // 0x2734cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272EF8u;
    goto label_272ef8;
    ctx->pc = 0x2734D0u;
label_2734d0:
    // 0x2734d0: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x2734d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
    // 0x2734d4: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2734D4u;
    {
        const bool branch_taken_0x2734d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2734D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734D4u;
        // 0x2734d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734d4) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x2734DCu;
label_2734dc:
    // 0x2734dc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2734dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2734e0: 0xc09ef32  jal         func_27BCC8
    ctx->pc = 0x2734E0u;
    SET_GPR_U32(ctx, 31, 0x2734E8u);
    ctx->pc = 0x2734E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2734E0u;
    // 0x2734e4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BCC8u, 0x2734E0u, 0x2734E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734E8u;
label_2734e8:
    // 0x2734e8: 0x26702d78  addiu       $s0, $s3, 0x2D78
    ctx->pc = 0x2734e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 11640));
    // 0x2734ec: 0xae020420  sw          $v0, 0x420($s0)
    ctx->pc = 0x2734ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
    // 0x2734f0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2734F0u;
    {
        const bool branch_taken_0x2734f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734F0u;
        // 0x2734f4: 0x2411fffe  addiu       $s1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734f0) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x2734F8u;
    // 0x2734f8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2734f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2734fc: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2734fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x273500: 0x248425a8  addiu       $a0, $a0, 0x25A8
    ctx->pc = 0x273500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9640));
    // 0x273504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273508: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x273508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27350c: 0x25299f50  addiu       $t1, $t1, -0x60B0
    ctx->pc = 0x27350cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942544));
    // 0x273510: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x273510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x273514: 0xc09cbbe  jal         func_272EF8
    ctx->pc = 0x273514u;
    SET_GPR_U32(ctx, 31, 0x27351Cu);
    ctx->pc = 0x273518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273514u;
    // 0x273518: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272EF8u;
    goto label_272ef8;
    ctx->pc = 0x27351Cu;
label_27351c:
    // 0x27351c: 0xae020418  sw          $v0, 0x418($s0)
    ctx->pc = 0x27351cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 2));
    // 0x273520: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x273520u;
    {
        const bool branch_taken_0x273520 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x273524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273520u;
        // 0x273524: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273520) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x273528u;
    // 0x273528: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x27352c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273530: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x273530u;
    SET_GPR_U32(ctx, 31, 0x273538u);
    ctx->pc = 0x273534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273530u;
    // 0x273534: 0x8c8406bc  lw          $a0, 0x6BC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x273530u, 0x273538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273538u;
label_273538:
    // 0x273538: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x27353c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273540: 0x8c6306dc  lw          $v1, 0x6DC($v1)
    ctx->pc = 0x273540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1756)));
    // 0x273544: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x273544u;
    {
        const bool branch_taken_0x273544 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x273548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273544u;
        // 0x273548: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273544) {
            ctx->pc = 0x273560u;
            goto label_273560;
        }
    }
    ctx->pc = 0x27354Cu;
    // 0x27354c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273550: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x273550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x273554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273558: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x273558u;
    {
        const bool branch_taken_0x273558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273558u;
        // 0x27355c: 0xac832d74  sw          $v1, 0x2D74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273558) {
            ctx->pc = 0x2736A4u;
            goto label_2736a4;
        }
    }
    ctx->pc = 0x273560u;
label_273560:
    // 0x273560: 0x26f02d78  addiu       $s0, $s7, 0x2D78
    ctx->pc = 0x273560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 11640));
label_273564:
    // 0x273564: 0x8e040418  lw          $a0, 0x418($s0)
    ctx->pc = 0x273564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x273568: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273568u;
    {
        const bool branch_taken_0x273568 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x273568) {
            ctx->pc = 0x27356Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273568u;
            // 0x27356c: 0x8e040420  lw          $a0, 0x420($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273584u;
            goto label_273584;
        }
    }
    ctx->pc = 0x273570u;
    // 0x273570: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x273570u;
    SET_GPR_U32(ctx, 31, 0x273578u);
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x273570u, 0x273578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273578u;
label_273578:
    // 0x273578: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x273578u;
    SET_GPR_U32(ctx, 31, 0x273580u);
    ctx->pc = 0x27357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273578u;
    // 0x27357c: 0x8e040418  lw          $a0, 0x418($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x273578u, 0x273580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273580u;
label_273580:
    // 0x273580: 0x8e040420  lw          $a0, 0x420($s0)
    ctx->pc = 0x273580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
label_273584:
    // 0x273584: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273584u;
    {
        const bool branch_taken_0x273584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273584) {
            ctx->pc = 0x273594u;
            goto label_273594;
        }
    }
    ctx->pc = 0x27358Cu;
    // 0x27358c: 0xc09edd6  jal         func_27B758
    ctx->pc = 0x27358Cu;
    SET_GPR_U32(ctx, 31, 0x273594u);
    ctx->pc = 0x27B758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B758u, 0x27358Cu, 0x273594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273594u;
label_273594:
    // 0x273594: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273598: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27359c: 0x8c8406bc  lw          $a0, 0x6BC($a0)
    ctx->pc = 0x27359cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
    // 0x2735a0: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2735A0u;
    {
        const bool branch_taken_0x2735a0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2735a0) {
            ctx->pc = 0x2735B0u;
            goto label_2735b0;
        }
    }
    ctx->pc = 0x2735A8u;
    // 0x2735a8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2735A8u;
    SET_GPR_U32(ctx, 31, 0x2735B0u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2735A8u, 0x2735B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735B0u;
label_2735b0:
    // 0x2735b0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2735b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2735b4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2735b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2735b8: 0x8c8406c0  lw          $a0, 0x6C0($a0)
    ctx->pc = 0x2735b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1728)));
    // 0x2735bc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2735BCu;
    {
        const bool branch_taken_0x2735bc = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2735bc) {
            ctx->pc = 0x2735CCu;
            goto label_2735cc;
        }
    }
    ctx->pc = 0x2735C4u;
    // 0x2735c4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2735C4u;
    SET_GPR_U32(ctx, 31, 0x2735CCu);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2735C4u, 0x2735CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735CCu;
label_2735cc:
    // 0x2735cc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2735ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2735d0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2735d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2735d4: 0x8c8406c4  lw          $a0, 0x6C4($a0)
    ctx->pc = 0x2735d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1732)));
    // 0x2735d8: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2735D8u;
    {
        const bool branch_taken_0x2735d8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2735d8) {
            ctx->pc = 0x2735E8u;
            goto label_2735e8;
        }
    }
    ctx->pc = 0x2735E0u;
    // 0x2735e0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2735E0u;
    SET_GPR_U32(ctx, 31, 0x2735E8u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2735E0u, 0x2735E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735E8u;
label_2735e8:
    // 0x2735e8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2735e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2735ec: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2735ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2735f0: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x2735f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2735f4: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2735F4u;
    {
        const bool branch_taken_0x2735f4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2735f4) {
            ctx->pc = 0x273604u;
            goto label_273604;
        }
    }
    ctx->pc = 0x2735FCu;
    // 0x2735fc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2735FCu;
    SET_GPR_U32(ctx, 31, 0x273604u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2735FCu, 0x273604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273604u;
label_273604:
    // 0x273604: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273608: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27360c: 0x8c8406cc  lw          $a0, 0x6CC($a0)
    ctx->pc = 0x27360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x273610: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273610u;
    {
        const bool branch_taken_0x273610 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x273610) {
            ctx->pc = 0x273620u;
            goto label_273620;
        }
    }
    ctx->pc = 0x273618u;
    // 0x273618: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273618u;
    SET_GPR_U32(ctx, 31, 0x273620u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x273618u, 0x273620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273620u;
label_273620:
    // 0x273620: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273624: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273628: 0x8c8406d0  lw          $a0, 0x6D0($a0)
    ctx->pc = 0x273628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    // 0x27362c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27362Cu;
    {
        const bool branch_taken_0x27362c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x27362c) {
            ctx->pc = 0x27363Cu;
            goto label_27363c;
        }
    }
    ctx->pc = 0x273634u;
    // 0x273634: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273634u;
    SET_GPR_U32(ctx, 31, 0x27363Cu);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x273634u, 0x27363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27363Cu;
label_27363c:
    // 0x27363c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27363cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273640: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273644: 0x8c8406d4  lw          $a0, 0x6D4($a0)
    ctx->pc = 0x273644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
    // 0x273648: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273648u;
    {
        const bool branch_taken_0x273648 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x273648) {
            ctx->pc = 0x273658u;
            goto label_273658;
        }
    }
    ctx->pc = 0x273650u;
    // 0x273650: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273650u;
    SET_GPR_U32(ctx, 31, 0x273658u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x273650u, 0x273658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273658u;
label_273658:
    // 0x273658: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x273658u;
    {
        const bool branch_taken_0x273658 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x273658) {
            ctx->pc = 0x273698u;
            goto label_273698;
        }
    }
    ctx->pc = 0x273660u;
    // 0x273660: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x273660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x273664: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273664u;
    {
        const bool branch_taken_0x273664 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x273664) {
            ctx->pc = 0x27367Cu;
            goto label_27367c;
        }
    }
    ctx->pc = 0x27366Cu;
    // 0x27366c: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x27366Cu;
    SET_GPR_U32(ctx, 31, 0x273674u);
    ctx->pc = 0x10CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAB0u, 0x27366Cu, 0x273674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273674u;
label_273674:
    // 0x273674: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x273674u;
    SET_GPR_U32(ctx, 31, 0x27367Cu);
    ctx->pc = 0x273678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273674u;
    // 0x273678: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x273674u, 0x27367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27367Cu;
label_27367c:
    // 0x27367c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27367cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273680: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273684: 0x8c8406d8  lw          $a0, 0x6D8($a0)
    ctx->pc = 0x273684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1752)));
    // 0x273688: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273688u;
    {
        const bool branch_taken_0x273688 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x273688) {
            ctx->pc = 0x273698u;
            goto label_273698;
        }
    }
    ctx->pc = 0x273690u;
    // 0x273690: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273690u;
    SET_GPR_U32(ctx, 31, 0x273698u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x273690u, 0x273698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273698u;
label_273698:
    // 0x273698: 0xc09ecdc  jal         func_27B370
    ctx->pc = 0x273698u;
    SET_GPR_U32(ctx, 31, 0x2736A0u);
    ctx->pc = 0x27B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B370u, 0x273698u, 0x2736A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2736A0u;
label_2736a0:
    // 0x2736a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2736a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2736a4:
    // 0x2736a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2736a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2736a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2736a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2736ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2736acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2736b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2736b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2736b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2736b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2736b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2736b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2736bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2736bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2736c0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2736c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2736c4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2736c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2736c8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2736c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2736cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2736CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2736D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736CCu;
        // 0x2736d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2736CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2736D4u;
    // 0x2736d4: 0x0  nop
    ctx->pc = 0x2736d4u;
    // NOP
}
