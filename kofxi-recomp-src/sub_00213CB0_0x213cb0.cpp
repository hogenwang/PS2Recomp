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

// Function: sub_00213CB0
// Address: 0x213cb0 - 0x213d60
void sub_00213CB0_0x213cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213CB0_0x213cb0");
#endif

    switch (ctx->pc) {
        case 0x213cccu: goto label_213ccc;
        case 0x213cdcu: goto label_213cdc;
        case 0x213cecu: goto label_213cec;
        case 0x213cfcu: goto label_213cfc;
        case 0x213d0cu: goto label_213d0c;
        case 0x213d1cu: goto label_213d1c;
        case 0x213d2cu: goto label_213d2c;
        case 0x213d3cu: goto label_213d3c;
        default: break;
    }

    ctx->pc = 0x213cb0u;

    // 0x213cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213cb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cc0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213cc4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213CC4u;
    SET_GPR_U32(ctx, 31, 0x213CCCu);
    ctx->pc = 0x213CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CC4u;
    // 0x213cc8: 0x24840788  addiu       $a0, $a0, 0x788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213CC4u, 0x213CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CCCu;
label_213ccc:
    // 0x213ccc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213cd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cd4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213CD4u;
    SET_GPR_U32(ctx, 31, 0x213CDCu);
    ctx->pc = 0x213CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CD4u;
    // 0x213cd8: 0x248403d8  addiu       $a0, $a0, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213CD4u, 0x213CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CDCu;
label_213cdc:
    // 0x213cdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213ce0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x213ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x213ce4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213CE4u;
    SET_GPR_U32(ctx, 31, 0x213CECu);
    ctx->pc = 0x213CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CE4u;
    // 0x213ce8: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213CE4u, 0x213CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CECu;
label_213cec:
    // 0x213cec: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x213cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x213cf0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213cf4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213CF4u;
    SET_GPR_U32(ctx, 31, 0x213CFCu);
    ctx->pc = 0x213CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CF4u;
    // 0x213cf8: 0x24840758  addiu       $a0, $a0, 0x758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213CF4u, 0x213CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CFCu;
label_213cfc:
    // 0x213cfc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213d00: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x213d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x213d04: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213D04u;
    SET_GPR_U32(ctx, 31, 0x213D0Cu);
    ctx->pc = 0x213D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D04u;
    // 0x213d08: 0x248406b8  addiu       $a0, $a0, 0x6B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213D04u, 0x213D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D0Cu;
label_213d0c:
    // 0x213d0c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213d10: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x213d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x213d14: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213D14u;
    SET_GPR_U32(ctx, 31, 0x213D1Cu);
    ctx->pc = 0x213D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D14u;
    // 0x213d18: 0x24840688  addiu       $a0, $a0, 0x688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213D14u, 0x213D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D1Cu;
label_213d1c:
    // 0x213d1c: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x213d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x213d20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213d24: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213D24u;
    SET_GPR_U32(ctx, 31, 0x213D2Cu);
    ctx->pc = 0x213D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D24u;
    // 0x213d28: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213D24u, 0x213D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D2Cu;
label_213d2c:
    // 0x213d2c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x213d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x213d30: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213d34: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213D34u;
    SET_GPR_U32(ctx, 31, 0x213D3Cu);
    ctx->pc = 0x213D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D34u;
    // 0x213d38: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x213D34u, 0x213D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D3Cu;
label_213d3c:
    // 0x213d3c: 0x26100098  addiu       $s0, $s0, 0x98
    ctx->pc = 0x213d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x213d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213d48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213d50: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x213d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x213d54: 0x8043e52  j           func_10F948
    ctx->pc = 0x213D54u;
    ctx->pc = 0x213D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D54u;
    // 0x213d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x213D5Cu;
    // 0x213d5c: 0x0  nop
    ctx->pc = 0x213d5cu;
    // NOP
    if (ctx->pc == 0x213d5cu) { ctx->pc = 0x213d60u; }
}
