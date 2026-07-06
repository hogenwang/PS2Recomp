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

// Function: sub_00298ED8
// Address: 0x298ed8 - 0x299048
void sub_00298ED8_0x298ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298ED8_0x298ed8");
#endif

    switch (ctx->pc) {
        case 0x298edcu: goto label_298edc;
        case 0x298f1cu: goto label_298f1c;
        case 0x298f2cu: goto label_298f2c;
        case 0x298fa4u: goto label_298fa4;
        case 0x298fc8u: goto label_298fc8;
        case 0x298fd4u: goto label_298fd4;
        case 0x298ff0u: goto label_298ff0;
        case 0x298ff8u: goto label_298ff8;
        case 0x299020u: goto label_299020;
        default: break;
    }

    ctx->pc = 0x298ed8u;

    // 0x298ed8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x298ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_298edc:
    // 0x298edc: 0x3e00008  jr          $ra
    ctx->pc = 0x298EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EDCu;
        // 0x298ee0: 0x24424eb8  addiu       $v0, $v0, 0x4EB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298EE4u;
    // 0x298ee4: 0x0  nop
    ctx->pc = 0x298ee4u;
    // NOP
    // 0x298ee8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x298ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x298eec: 0x3e00008  jr          $ra
    ctx->pc = 0x298EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EECu;
        // 0x298ef0: 0x2442b530  addiu       $v0, $v0, -0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298EF4u;
    // 0x298ef4: 0x0  nop
    ctx->pc = 0x298ef4u;
    // NOP
    // 0x298ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298f04: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x298f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x298f08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298f10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x298f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x298f14: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x298F14u;
    SET_GPR_U32(ctx, 31, 0x298F1Cu);
    ctx->pc = 0x298F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F14u;
    // 0x298f18: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x298F14u, 0x298F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F1Cu;
label_298f1c:
    // 0x298f1c: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x298f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x298f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f24: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x298F24u;
    SET_GPR_U32(ctx, 31, 0x298F2Cu);
    ctx->pc = 0x298F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F24u;
    // 0x298f28: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x298F24u, 0x298F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F2Cu;
label_298f2c:
    // 0x298f2c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x298f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x298f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f3c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x298f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x298f40: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x298F40u;
    ctx->pc = 0x298F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F40u;
    // 0x298f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x298F48u;
    // 0x298f48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x298f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x298f4c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x298f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298f50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298f54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x298f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f58: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298f5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x298f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f60: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x298f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x298f64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x298f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f68: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x298f6c: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x298F6Cu;
    {
        const bool branch_taken_0x298f6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F6Cu;
        // 0x298f70: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f6c) {
            ctx->pc = 0x299024u;
            goto label_299024;
        }
    }
    ctx->pc = 0x298F74u;
    // 0x298f74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x298f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x298f78: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x298F78u;
    {
        const bool branch_taken_0x298f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F78u;
        // 0x298f7c: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f78) {
            ctx->pc = 0x299000u;
            goto label_299000;
        }
    }
    ctx->pc = 0x298F80u;
    // 0x298f80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x298f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f84: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x298f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x298f88: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x298f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x298f8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298F8Cu;
    {
        const bool branch_taken_0x298f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F8Cu;
        // 0x298f90: 0x2832021  addu        $a0, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f8c) {
            ctx->pc = 0x298FB4u;
            goto label_298fb4;
        }
    }
    ctx->pc = 0x298F94u;
    // 0x298f94: 0x11803c  dsll32      $s0, $s1, 0
    ctx->pc = 0x298f94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 0));
    // 0x298f98: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x298f98u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x298f9c: 0xc049c48  jal         func_127120
    ctx->pc = 0x298F9Cu;
    SET_GPR_U32(ctx, 31, 0x298FA4u);
    ctx->pc = 0x298FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F9Cu;
    // 0x298fa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x298F9Cu, 0x298FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FA4u;
label_298fa4:
    // 0x298fa4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x298fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x298fa8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x298fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x298fac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x298FACu;
    {
        const bool branch_taken_0x298fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FACu;
        // 0x298fb0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fac) {
            ctx->pc = 0x299024u;
            goto label_299024;
        }
    }
    ctx->pc = 0x298FB4u;
label_298fb4:
    // 0x298fb4: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x298fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x298fb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x298fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fbc: 0x2033023  subu        $a2, $s0, $v1
    ctx->pc = 0x298fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x298fc0: 0xc049c48  jal         func_127120
    ctx->pc = 0x298FC0u;
    SET_GPR_U32(ctx, 31, 0x298FC8u);
    ctx->pc = 0x298FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FC0u;
    // 0x298fc4: 0x2832021  addu        $a0, $s4, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x298FC0u, 0x298FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FC8u;
label_298fc8:
    // 0x298fc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x298fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fcc: 0xc0a6412  jal         func_299048
    ctx->pc = 0x298FCCu;
    SET_GPR_U32(ctx, 31, 0x298FD4u);
    ctx->pc = 0x298FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FCCu;
    // 0x298fd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299048u, 0x298FCCu, 0x298FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FD4u;
label_298fd4:
    // 0x298fd4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x298fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x298fd8: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x298fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x298fdc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x298fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x298fe0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x298fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x298fe4: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x298fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298fe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298FE8u;
    {
        const bool branch_taken_0x298fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FE8u;
        // 0x298fec: 0x230882f  dsubu       $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fe8) {
            ctx->pc = 0x299000u;
            goto label_299000;
        }
    }
    ctx->pc = 0x298FF0u;
label_298ff0:
    // 0x298ff0: 0xc0a6412  jal         func_299048
    ctx->pc = 0x298FF0u;
    SET_GPR_U32(ctx, 31, 0x298FF8u);
    ctx->pc = 0x298FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FF0u;
    // 0x298ff4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299048u, 0x298FF0u, 0x298FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FF8u;
label_298ff8:
    // 0x298ff8: 0x6631fff0  daddiu      $s1, $s1, -0x10
    ctx->pc = 0x298ff8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294967280);
    // 0x298ffc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x298ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_299000:
    // 0x299000: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x299000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x299004: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x299004u;
    {
        const bool branch_taken_0x299004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299004u;
        // 0x299008: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299004) {
            ctx->pc = 0x298FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298ff0;
        }
    }
    ctx->pc = 0x29900Cu;
    // 0x29900c: 0x11803c  dsll32      $s0, $s1, 0
    ctx->pc = 0x29900cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 0));
    // 0x299010: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x299010u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x299014: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299018: 0xc049c48  jal         func_127120
    ctx->pc = 0x299018u;
    SET_GPR_U32(ctx, 31, 0x299020u);
    ctx->pc = 0x29901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299018u;
    // 0x29901c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x299018u, 0x299020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299020u;
label_299020:
    // 0x299020: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x299020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_299024:
    // 0x299024: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x299024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299028: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299028u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29902c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29902cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299030: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299034: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29903c: 0x3e00008  jr          $ra
    ctx->pc = 0x29903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29903Cu;
        // 0x299040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299044u;
    // 0x299044: 0x0  nop
    ctx->pc = 0x299044u;
    // NOP
    if (ctx->pc == 0x299044u) { ctx->pc = 0x299048u; }
}
