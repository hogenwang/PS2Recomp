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

// Function: sub_00221E40
// Address: 0x221e40 - 0x221fb0
void sub_00221E40_0x221e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221E40_0x221e40");
#endif

    switch (ctx->pc) {
        case 0x221e84u: goto label_221e84;
        case 0x221e88u: goto label_221e88;
        case 0x221ea4u: goto label_221ea4;
        case 0x221ec4u: goto label_221ec4;
        case 0x221ef4u: goto label_221ef4;
        case 0x221f08u: goto label_221f08;
        case 0x221f24u: goto label_221f24;
        case 0x221f3cu: goto label_221f3c;
        case 0x221f54u: goto label_221f54;
        case 0x221f5cu: goto label_221f5c;
        case 0x221f6cu: goto label_221f6c;
        case 0x221f94u: goto label_221f94;
        case 0x221fa4u: goto label_221fa4;
        default: break;
    }

    ctx->pc = 0x221e40u;

    // 0x221e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221e44: 0x240f0800  addiu       $t7, $zero, 0x800
    ctx->pc = 0x221e44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x221e48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x221e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x221e4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x221e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x221e50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x221e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x221e54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x221e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x221e58: 0x8c880838  lw          $t0, 0x838($a0)
    ctx->pc = 0x221e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2104)));
    // 0x221e5c: 0x1e89023  subu        $s2, $t7, $t0
    ctx->pc = 0x221e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x221e60: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x221E60u;
    {
        const bool branch_taken_0x221e60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x221E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E60u;
        // 0x221e64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e60) {
            ctx->pc = 0x221E9Cu;
            goto label_221e9c;
        }
    }
    ctx->pc = 0x221E68u;
    // 0x221e68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221e6c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x221e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x221e70: 0x24842cd0  addiu       $a0, $a0, 0x2CD0
    ctx->pc = 0x221e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11472));
    // 0x221e74: 0x24e72ce0  addiu       $a3, $a3, 0x2CE0
    ctx->pc = 0x221e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11488));
    // 0x221e78: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x221e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x221e7c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x221E7Cu;
    SET_GPR_U32(ctx, 31, 0x221E84u);
    ctx->pc = 0x221E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E7Cu;
    // 0x221e80: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x221E7Cu, 0x221E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221E84u;
label_221e84:
    // 0x221e84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x221e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_221e88:
    // 0x221e88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x221e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221e8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x221e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221e90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x221e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x221e94: 0x3e00008  jr          $ra
    ctx->pc = 0x221E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E94u;
        // 0x221e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221E9Cu;
label_221e9c:
    // 0x221e9c: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x221E9Cu;
    SET_GPR_U32(ctx, 31, 0x221EA4u);
    ctx->pc = 0x221EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221E9Cu;
    // 0x221ea0: 0x888021  addu        $s0, $a0, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FE80u, 0x221E9Cu, 0x221EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EA4u;
label_221ea4:
    // 0x221ea4: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x221ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x221ea8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x221ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x221eac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eb0: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x221eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x221eb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x221eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221eb8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x221eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x221ebc: 0xc097688  jal         func_25DA20
    ctx->pc = 0x221EBCu;
    SET_GPR_U32(ctx, 31, 0x221EC4u);
    ctx->pc = 0x221EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221EBCu;
    // 0x221ec0: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA20u, 0x221EBCu, 0x221EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EC4u;
label_221ec4:
    // 0x221ec4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x221ec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x221ec8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x221ec8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x221ecc: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221ECCu;
    {
        const bool branch_taken_0x221ecc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x221ecc) {
            ctx->pc = 0x221EE4u;
            goto label_221ee4;
        }
    }
    ctx->pc = 0x221ED4u;
    // 0x221ed4: 0x8e2f0838  lw          $t7, 0x838($s1)
    ctx->pc = 0x221ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x221ed8: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x221ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x221edc: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x221edcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x221ee0: 0xae2f0838  sw          $t7, 0x838($s1)
    ctx->pc = 0x221ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 15));
label_221ee4:
    // 0x221ee4: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x221EE4u;
    {
        const bool branch_taken_0x221ee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x221ee4) {
            ctx->pc = 0x221F2Cu;
            goto label_221f2c;
        }
    }
    ctx->pc = 0x221EECu;
    // 0x221eec: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x221EECu;
    SET_GPR_U32(ctx, 31, 0x221EF4u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x221EECu, 0x221EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221EF4u;
label_221ef4:
    // 0x221ef4: 0xae201048  sw          $zero, 0x1048($s1)
    ctx->pc = 0x221ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4168), GPR_U32(ctx, 0));
    // 0x221ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221efc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x221efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221f00: 0xc089144  jal         func_224510
    ctx->pc = 0x221F00u;
    SET_GPR_U32(ctx, 31, 0x221F08u);
    ctx->pc = 0x221F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F00u;
    // 0x221f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x221F00u, 0x221F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F08u;
label_221f08:
    // 0x221f08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221f0c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x221f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x221f10: 0x24842cd0  addiu       $a0, $a0, 0x2CD0
    ctx->pc = 0x221f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11472));
    // 0x221f14: 0x24e72d00  addiu       $a3, $a3, 0x2D00
    ctx->pc = 0x221f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11520));
    // 0x221f18: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x221f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x221f1c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x221F1Cu;
    SET_GPR_U32(ctx, 31, 0x221F24u);
    ctx->pc = 0x221F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F1Cu;
    // 0x221f20: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x221F1Cu, 0x221F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F24u;
label_221f24:
    // 0x221f24: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x221F24u;
    {
        const bool branch_taken_0x221f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F24u;
        // 0x221f28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f24) {
            ctx->pc = 0x221E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221e88;
        }
    }
    ctx->pc = 0x221F2Cu;
label_221f2c:
    // 0x221f2c: 0x601001b  bgez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x221F2Cu;
    {
        const bool branch_taken_0x221f2c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x221f2c) {
            ctx->pc = 0x221F9Cu;
            goto label_221f9c;
        }
    }
    ctx->pc = 0x221F34u;
    // 0x221f34: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221F34u;
    SET_GPR_U32(ctx, 31, 0x221F3Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x221F34u, 0x221F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F3Cu;
label_221f3c:
    // 0x221f3c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x221f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221f40: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x221f40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x221f44: 0x124f0015  beq         $s2, $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x221F44u;
    {
        const bool branch_taken_0x221f44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        if (branch_taken_0x221f44) {
            ctx->pc = 0x221F9Cu;
            goto label_221f9c;
        }
    }
    ctx->pc = 0x221F4Cu;
    // 0x221f4c: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x221F4Cu;
    SET_GPR_U32(ctx, 31, 0x221F54u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x221F4Cu, 0x221F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F54u;
label_221f54:
    // 0x221f54: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221F54u;
    SET_GPR_U32(ctx, 31, 0x221F5Cu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x221F54u, 0x221F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F5Cu;
label_221f5c:
    // 0x221f5c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x221f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f64: 0xc089144  jal         func_224510
    ctx->pc = 0x221F64u;
    SET_GPR_U32(ctx, 31, 0x221F6Cu);
    ctx->pc = 0x221F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F64u;
    // 0x221f68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x221F64u, 0x221F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F6Cu;
label_221f6c:
    // 0x221f6c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221f70: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221f70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221f74: 0x24842cd0  addiu       $a0, $a0, 0x2CD0
    ctx->pc = 0x221f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11472));
    // 0x221f78: 0x25082d18  addiu       $t0, $t0, 0x2D18
    ctx->pc = 0x221f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11544));
    // 0x221f7c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x221f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f80: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x221f80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221f84: 0x240500e9  addiu       $a1, $zero, 0xE9
    ctx->pc = 0x221f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x221f88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x221f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221f8c: 0xc089794  jal         func_225E50
    ctx->pc = 0x221F8Cu;
    SET_GPR_U32(ctx, 31, 0x221F94u);
    ctx->pc = 0x221F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221F8Cu;
    // 0x221f90: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x221F8Cu, 0x221F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221F94u;
label_221f94:
    // 0x221f94: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x221F94u;
    {
        const bool branch_taken_0x221f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F94u;
        // 0x221f98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221f94) {
            ctx->pc = 0x221E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221e88;
        }
    }
    ctx->pc = 0x221F9Cu;
label_221f9c:
    // 0x221f9c: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x221F9Cu;
    SET_GPR_U32(ctx, 31, 0x221FA4u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x221F9Cu, 0x221FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221FA4u;
label_221fa4:
    // 0x221fa4: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x221FA4u;
    {
        const bool branch_taken_0x221fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221FA4u;
        // 0x221fa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221fa4) {
            ctx->pc = 0x221E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221e88;
        }
    }
    ctx->pc = 0x221FACu;
    // 0x221fac: 0x0  nop
    ctx->pc = 0x221facu;
    // NOP
    if (ctx->pc == 0x221facu) { ctx->pc = 0x221fb0u; }
}
