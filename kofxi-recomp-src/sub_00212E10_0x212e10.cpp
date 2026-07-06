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

// Function: sub_00212E10
// Address: 0x212e10 - 0x212f00
void sub_00212E10_0x212e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212E10_0x212e10");
#endif

    switch (ctx->pc) {
        case 0x212e2cu: goto label_212e2c;
        case 0x212e3cu: goto label_212e3c;
        case 0x212e4cu: goto label_212e4c;
        case 0x212e5cu: goto label_212e5c;
        case 0x212e6cu: goto label_212e6c;
        case 0x212e7cu: goto label_212e7c;
        case 0x212e8cu: goto label_212e8c;
        case 0x212e9cu: goto label_212e9c;
        case 0x212eacu: goto label_212eac;
        case 0x212ebcu: goto label_212ebc;
        case 0x212eccu: goto label_212ecc;
        case 0x212edcu: goto label_212edc;
        default: break;
    }

    ctx->pc = 0x212e10u;

    // 0x212e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212e18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x212e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212e24: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212E24u;
    SET_GPR_U32(ctx, 31, 0x212E2Cu);
    ctx->pc = 0x212E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E24u;
    // 0x212e28: 0x248405c8  addiu       $a0, $a0, 0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212E24u, 0x212E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E2Cu;
label_212e2c:
    // 0x212e2c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e34: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212E34u;
    SET_GPR_U32(ctx, 31, 0x212E3Cu);
    ctx->pc = 0x212E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E34u;
    // 0x212e38: 0x248403d8  addiu       $a0, $a0, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212E34u, 0x212E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E3Cu;
label_212e3c:
    // 0x212e3c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212e40: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x212e44: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212E44u;
    SET_GPR_U32(ctx, 31, 0x212E4Cu);
    ctx->pc = 0x212E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E44u;
    // 0x212e48: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212E44u, 0x212E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E4Cu;
label_212e4c:
    // 0x212e4c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x212e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x212e50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212e54: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212E54u;
    SET_GPR_U32(ctx, 31, 0x212E5Cu);
    ctx->pc = 0x212E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E54u;
    // 0x212e58: 0x24840588  addiu       $a0, $a0, 0x588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212E54u, 0x212E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E5Cu;
label_212e5c:
    // 0x212e5c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x212e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x212e60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212e64: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212E64u;
    SET_GPR_U32(ctx, 31, 0x212E6Cu);
    ctx->pc = 0x212E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E64u;
    // 0x212e68: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212E64u, 0x212E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E6Cu;
label_212e6c:
    // 0x212e6c: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x212e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x212e70: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212e74: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212E74u;
    SET_GPR_U32(ctx, 31, 0x212E7Cu);
    ctx->pc = 0x212E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E74u;
    // 0x212e78: 0x248405f8  addiu       $a0, $a0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212E74u, 0x212E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E7Cu;
label_212e7c:
    // 0x212e7c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x212e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x212e80: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212e84: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212E84u;
    SET_GPR_U32(ctx, 31, 0x212E8Cu);
    ctx->pc = 0x212E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E84u;
    // 0x212e88: 0x248404a8  addiu       $a0, $a0, 0x4A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212E84u, 0x212E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E8Cu;
label_212e8c:
    // 0x212e8c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x212e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x212e90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212e94: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212E94u;
    SET_GPR_U32(ctx, 31, 0x212E9Cu);
    ctx->pc = 0x212E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E94u;
    // 0x212e98: 0x24840608  addiu       $a0, $a0, 0x608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212E94u, 0x212E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E9Cu;
label_212e9c:
    // 0x212e9c: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x212e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x212ea0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212ea4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212EA4u;
    SET_GPR_U32(ctx, 31, 0x212EACu);
    ctx->pc = 0x212EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EA4u;
    // 0x212ea8: 0x24840618  addiu       $a0, $a0, 0x618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212EA4u, 0x212EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EACu;
label_212eac:
    // 0x212eac: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x212eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x212eb0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212eb4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212EB4u;
    SET_GPR_U32(ctx, 31, 0x212EBCu);
    ctx->pc = 0x212EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EB4u;
    // 0x212eb8: 0x24840628  addiu       $a0, $a0, 0x628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212EB4u, 0x212EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EBCu;
label_212ebc:
    // 0x212ebc: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x212ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x212ec0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212ec4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212EC4u;
    SET_GPR_U32(ctx, 31, 0x212ECCu);
    ctx->pc = 0x212EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EC4u;
    // 0x212ec8: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212EC4u, 0x212ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212ECCu;
label_212ecc:
    // 0x212ecc: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x212eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x212ed0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212ed4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212ED4u;
    SET_GPR_U32(ctx, 31, 0x212EDCu);
    ctx->pc = 0x212ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212ED4u;
    // 0x212ed8: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x212ED4u, 0x212EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EDCu;
label_212edc:
    // 0x212edc: 0x26100064  addiu       $s0, $s0, 0x64
    ctx->pc = 0x212edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x212ee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ee4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x212ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212ee8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212ef0: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x212ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x212ef4: 0x8043e52  j           func_10F948
    ctx->pc = 0x212EF4u;
    ctx->pc = 0x212EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EF4u;
    // 0x212ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x212EFCu;
    // 0x212efc: 0x0  nop
    ctx->pc = 0x212efcu;
    // NOP
}
