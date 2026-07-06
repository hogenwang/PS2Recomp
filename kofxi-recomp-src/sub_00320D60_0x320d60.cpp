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

// Function: sub_00320D60
// Address: 0x320d60 - 0x320ef0
void sub_00320D60_0x320d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320D60_0x320d60");
#endif

    switch (ctx->pc) {
        case 0x320d80u: goto label_320d80;
        case 0x320d88u: goto label_320d88;
        case 0x320d90u: goto label_320d90;
        case 0x320d98u: goto label_320d98;
        case 0x320da0u: goto label_320da0;
        case 0x320da8u: goto label_320da8;
        case 0x320db0u: goto label_320db0;
        case 0x320db8u: goto label_320db8;
        case 0x320dc0u: goto label_320dc0;
        case 0x320df0u: goto label_320df0;
        case 0x320e00u: goto label_320e00;
        case 0x320e08u: goto label_320e08;
        case 0x320e3cu: goto label_320e3c;
        case 0x320e68u: goto label_320e68;
        case 0x320e70u: goto label_320e70;
        case 0x320e7cu: goto label_320e7c;
        case 0x320e84u: goto label_320e84;
        case 0x320e8cu: goto label_320e8c;
        case 0x320e94u: goto label_320e94;
        case 0x320e9cu: goto label_320e9c;
        case 0x320ea4u: goto label_320ea4;
        case 0x320eacu: goto label_320eac;
        case 0x320eb8u: goto label_320eb8;
        case 0x320ec4u: goto label_320ec4;
        default: break;
    }

    ctx->pc = 0x320d60u;

    // 0x320d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x320d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x320d64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x320d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x320d68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x320d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x320d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x320d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x320d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x320d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320d78: 0xc0c880c  jal         func_322030
    ctx->pc = 0x320D78u;
    SET_GPR_U32(ctx, 31, 0x320D80u);
    ctx->pc = 0x320D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D78u;
    // 0x320d7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x320D78u, 0x320D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D80u;
label_320d80:
    // 0x320d80: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x320D80u;
    SET_GPR_U32(ctx, 31, 0x320D88u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x320D80u, 0x320D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D88u;
label_320d88:
    // 0x320d88: 0xc05fa14  jal         func_17E850
    ctx->pc = 0x320D88u;
    SET_GPR_U32(ctx, 31, 0x320D90u);
    ctx->pc = 0x17E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E850u, 0x320D88u, 0x320D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D90u;
label_320d90:
    // 0x320d90: 0xc05f6e8  jal         func_17DBA0
    ctx->pc = 0x320D90u;
    SET_GPR_U32(ctx, 31, 0x320D98u);
    ctx->pc = 0x17DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DBA0u, 0x320D90u, 0x320D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D98u;
label_320d98:
    // 0x320d98: 0xc0570bc  jal         func_15C2F0
    ctx->pc = 0x320D98u;
    SET_GPR_U32(ctx, 31, 0x320DA0u);
    ctx->pc = 0x15C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C2F0u, 0x320D98u, 0x320DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DA0u;
label_320da0:
    // 0x320da0: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x320DA0u;
    SET_GPR_U32(ctx, 31, 0x320DA8u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x320DA0u, 0x320DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DA8u;
label_320da8:
    // 0x320da8: 0xc06350c  jal         func_18D430
    ctx->pc = 0x320DA8u;
    SET_GPR_U32(ctx, 31, 0x320DB0u);
    ctx->pc = 0x18D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D430u, 0x320DA8u, 0x320DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DB0u;
label_320db0:
    // 0x320db0: 0xc054250  jal         func_150940
    ctx->pc = 0x320DB0u;
    SET_GPR_U32(ctx, 31, 0x320DB8u);
    ctx->pc = 0x150940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150940u, 0x320DB0u, 0x320DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DB8u;
label_320db8:
    // 0x320db8: 0xc0c81b0  jal         func_3206C0
    ctx->pc = 0x320DB8u;
    SET_GPR_U32(ctx, 31, 0x320DC0u);
    ctx->pc = 0x3206C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3206C0u, 0x320DB8u, 0x320DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DC0u;
label_320dc0:
    // 0x320dc0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x320dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x320dc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320dc8: 0xa460f370  sh          $zero, -0xC90($v1)
    ctx->pc = 0x320dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294964080), (uint16_t)GPR_U32(ctx, 0));
    // 0x320dcc: 0xa040ced0  sb          $zero, -0x3130($v0)
    ctx->pc = 0x320dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954704), (uint8_t)GPR_U32(ctx, 0));
    // 0x320dd0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320dd4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320dd8: 0xa06003e8  sb          $zero, 0x3E8($v1)
    ctx->pc = 0x320dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1000), (uint8_t)GPR_U32(ctx, 0));
    // 0x320ddc: 0xa040d9a0  sb          $zero, -0x2660($v0)
    ctx->pc = 0x320ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957472), (uint8_t)GPR_U32(ctx, 0));
    // 0x320de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320de4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320de8: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x320DE8u;
    SET_GPR_U32(ctx, 31, 0x320DF0u);
    ctx->pc = 0x320DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320DE8u;
    // 0x320dec: 0xac430388  sw          $v1, 0x388($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 904), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x320DE8u, 0x320DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DF0u;
label_320df0:
    // 0x320df0: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x320df0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x320df4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x320df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320df8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x320df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320dfc: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x320dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
label_320e00:
    // 0x320e00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x320e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320e04: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x320e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_320e08:
    // 0x320e08: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x320e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x320e0c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320e10: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x320e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x320e14: 0x244203a0  addiu       $v0, $v0, 0x3A0
    ctx->pc = 0x320e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    // 0x320e18: 0x2603014c  addiu       $v1, $s0, 0x14C
    ctx->pc = 0x320e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x320e1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x320e20: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x320e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x320e24: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320e28: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x320e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x320e2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x320e30: 0x9204014d  lbu         $a0, 0x14D($s0)
    ctx->pc = 0x320e30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 333)));
    // 0x320e34: 0xc0c4494  jal         func_311250
    ctx->pc = 0x320E34u;
    SET_GPR_U32(ctx, 31, 0x320E3Cu);
    ctx->pc = 0x320E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320E34u;
    // 0x320e38: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311250u, 0x320E34u, 0x320E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E3Cu;
label_320e3c:
    // 0x320e3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x320e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x320e40: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x320e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x320e44: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x320E44u;
    {
        const bool branch_taken_0x320e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E44u;
        // 0x320e48: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e44) {
            ctx->pc = 0x320E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320e08;
        }
    }
    ctx->pc = 0x320E4Cu;
    // 0x320e4c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x320e4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x320e50: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x320e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x320e54: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x320e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x320e58: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x320E58u;
    {
        const bool branch_taken_0x320e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E58u;
        // 0x320e5c: 0x26310248  addiu       $s1, $s1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e58) {
            ctx->pc = 0x320E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320e00;
        }
    }
    ctx->pc = 0x320E60u;
    // 0x320e60: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x320E60u;
    SET_GPR_U32(ctx, 31, 0x320E68u);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x320E60u, 0x320E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E68u;
label_320e68:
    // 0x320e68: 0xc054e0c  jal         func_153830
    ctx->pc = 0x320E68u;
    SET_GPR_U32(ctx, 31, 0x320E70u);
    ctx->pc = 0x153830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153830u, 0x320E68u, 0x320E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E70u;
label_320e70:
    // 0x320e70: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x320e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x320e74: 0xc052d44  jal         func_14B510
    ctx->pc = 0x320E74u;
    SET_GPR_U32(ctx, 31, 0x320E7Cu);
    ctx->pc = 0x320E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320E74u;
    // 0x320e78: 0x8044f340  lb          $a0, -0xCC0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B510u, 0x320E74u, 0x320E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E7Cu;
label_320e7c:
    // 0x320e7c: 0xc052c64  jal         func_14B190
    ctx->pc = 0x320E7Cu;
    SET_GPR_U32(ctx, 31, 0x320E84u);
    ctx->pc = 0x14B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B190u, 0x320E7Cu, 0x320E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E84u;
label_320e84:
    // 0x320e84: 0xc0cb45c  jal         func_32D170
    ctx->pc = 0x320E84u;
    SET_GPR_U32(ctx, 31, 0x320E8Cu);
    ctx->pc = 0x32D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D170u, 0x320E84u, 0x320E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E8Cu;
label_320e8c:
    // 0x320e8c: 0xc063de4  jal         func_18F790
    ctx->pc = 0x320E8Cu;
    SET_GPR_U32(ctx, 31, 0x320E94u);
    ctx->pc = 0x18F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F790u, 0x320E8Cu, 0x320E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E94u;
label_320e94:
    // 0x320e94: 0xc0635b0  jal         func_18D6C0
    ctx->pc = 0x320E94u;
    SET_GPR_U32(ctx, 31, 0x320E9Cu);
    ctx->pc = 0x18D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D6C0u, 0x320E94u, 0x320E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320E9Cu;
label_320e9c:
    // 0x320e9c: 0xc04bb74  jal         func_12EDD0
    ctx->pc = 0x320E9Cu;
    SET_GPR_U32(ctx, 31, 0x320EA4u);
    ctx->pc = 0x12EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EDD0u, 0x320E9Cu, 0x320EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EA4u;
label_320ea4:
    // 0x320ea4: 0xc063590  jal         func_18D640
    ctx->pc = 0x320EA4u;
    SET_GPR_U32(ctx, 31, 0x320EACu);
    ctx->pc = 0x18D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D640u, 0x320EA4u, 0x320EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EACu;
label_320eac:
    // 0x320eac: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x320eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x320eb0: 0xc0c847c  jal         func_3211F0
    ctx->pc = 0x320EB0u;
    SET_GPR_U32(ctx, 31, 0x320EB8u);
    ctx->pc = 0x320EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EB0u;
    // 0x320eb4: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211F0u, 0x320EB0u, 0x320EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EB8u;
label_320eb8:
    // 0x320eb8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320ebc: 0xc069634  jal         func_1A58D0
    ctx->pc = 0x320EBCu;
    SET_GPR_U32(ctx, 31, 0x320EC4u);
    ctx->pc = 0x320EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EBCu;
    // 0x320ec0: 0xac400388  sw          $zero, 0x388($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 904), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A58D0u, 0x320EBCu, 0x320EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EC4u;
label_320ec4:
    // 0x320ec4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x320ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x320ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320ecc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x320eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320ed0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x320ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320ed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320ed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x320EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EE0u;
        // 0x320ee4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320EE8u;
    // 0x320ee8: 0x0  nop
    ctx->pc = 0x320ee8u;
    // NOP
    // 0x320eec: 0x0  nop
    ctx->pc = 0x320eecu;
    // NOP
    if (ctx->pc == 0x320eecu) { ctx->pc = 0x320ef0u; }
}
