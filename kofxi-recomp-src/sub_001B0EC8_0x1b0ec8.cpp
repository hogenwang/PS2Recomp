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

// Function: sub_001B0EC8
// Address: 0x1b0ec8 - 0x1b1018
void sub_001B0EC8_0x1b0ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0EC8_0x1b0ec8");
#endif

    switch (ctx->pc) {
        case 0x1b0f04u: goto label_1b0f04;
        case 0x1b0f2cu: goto label_1b0f2c;
        case 0x1b0f74u: goto label_1b0f74;
        case 0x1b0fbcu: goto label_1b0fbc;
        case 0x1b0ff4u: goto label_1b0ff4;
        case 0x1b0ffcu: goto label_1b0ffc;
        case 0x1b1004u: goto label_1b1004;
        default: break;
    }

    ctx->pc = 0x1b0ec8u;

    // 0x1b0ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ed4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0ed8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b0ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0edc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0ee0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b0ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ee4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b0ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b0ee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ef0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b0ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ef4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b0ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b0ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0efc: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B0EFCu;
    SET_GPR_U32(ctx, 31, 0x1B0F04u);
    ctx->pc = 0x1B0F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EFCu;
    // 0x1b0f00: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC88u, 0x1B0EFCu, 0x1B0F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F04u;
label_1b0f04:
    // 0x1b0f04: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0F04u;
    {
        const bool branch_taken_0x1b0f04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f04) {
            ctx->pc = 0x1B0F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F04u;
            // 0x1b0f08: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F18u;
            goto label_1b0f18;
        }
    }
    ctx->pc = 0x1B0F0Cu;
    // 0x1b0f0c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b0f10: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B0F10u;
    {
        const bool branch_taken_0x1b0f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F10u;
        // 0x1b0f14: 0x248478f8  addiu       $a0, $a0, 0x78F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f10) {
            ctx->pc = 0x1B0F6Cu;
            goto label_1b0f6c;
        }
    }
    ctx->pc = 0x1B0F18u;
label_1b0f18:
    // 0x1b0f18: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0f1c: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0F1Cu;
    {
        const bool branch_taken_0x1b0f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1b0f1c) {
            ctx->pc = 0x1B0F2Cu;
            goto label_1b0f2c;
        }
    }
    ctx->pc = 0x1B0F24u;
    // 0x1b0f24: 0xc06c2cc  jal         func_1B0B30
    ctx->pc = 0x1B0F24u;
    SET_GPR_U32(ctx, 31, 0x1B0F2Cu);
    ctx->pc = 0x1B0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F24u;
    // 0x1b0f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B30u, 0x1B0F24u, 0x1B0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F2Cu;
label_1b0f2c:
    // 0x1b0f2c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F2Cu;
        // 0x1b0f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F40u;
            goto label_1b0f40;
        }
    }
    ctx->pc = 0x1B0F34u;
    // 0x1b0f34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0F34u;
    {
        const bool branch_taken_0x1b0f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F34u;
        // 0x1b0f38: 0xae120018  sw          $s2, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f34) {
            ctx->pc = 0x1B0F80u;
            goto label_1b0f80;
        }
    }
    ctx->pc = 0x1B0F3Cu;
    // 0x1b0f3c: 0x0  nop
    ctx->pc = 0x1b0f3cu;
    // NOP
label_1b0f40:
    // 0x1b0f40: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0F40u;
    {
        const bool branch_taken_0x1b0f40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0f40) {
            ctx->pc = 0x1B0F50u;
            goto label_1b0f50;
        }
    }
    ctx->pc = 0x1B0F48u;
    // 0x1b0f48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0F48u;
    {
        const bool branch_taken_0x1b0f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F48u;
        // 0x1b0f4c: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f48) {
            ctx->pc = 0x1B0F5Cu;
            goto label_1b0f5c;
        }
    }
    ctx->pc = 0x1B0F50u;
label_1b0f50:
    // 0x1b0f50: 0x16330005  bne         $s1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0F50u;
    {
        const bool branch_taken_0x1b0f50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F50u;
        // 0x1b0f54: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f50) {
            ctx->pc = 0x1B0F68u;
            goto label_1b0f68;
        }
    }
    ctx->pc = 0x1B0F58u;
    // 0x1b0f58: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b0f5c:
    // 0x1b0f5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b0f60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0F60u;
    {
        const bool branch_taken_0x1b0f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F60u;
        // 0x1b0f64: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f60) {
            ctx->pc = 0x1B0F80u;
            goto label_1b0f80;
        }
    }
    ctx->pc = 0x1B0F68u;
label_1b0f68:
    // 0x1b0f68: 0x24847920  addiu       $a0, $a0, 0x7920
    ctx->pc = 0x1b0f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31008));
label_1b0f6c:
    // 0x1b0f6c: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B0F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B0F74u);
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B0F6Cu, 0x1B0F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F74u;
label_1b0f74:
    // 0x1b0f74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0F74u;
    {
        const bool branch_taken_0x1b0f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F74u;
        // 0x1b0f78: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f74) {
            ctx->pc = 0x1B0FC0u;
            goto label_1b0fc0;
        }
    }
    ctx->pc = 0x1B0F7Cu;
    // 0x1b0f7c: 0x0  nop
    ctx->pc = 0x1b0f7cu;
    // NOP
label_1b0f80:
    // 0x1b0f80: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0f84: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0F84u;
    {
        const bool branch_taken_0x1b0f84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0f84) {
            ctx->pc = 0x1B0F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F84u;
            // 0x1b0f88: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F98u;
            goto label_1b0f98;
        }
    }
    ctx->pc = 0x1B0F8Cu;
    // 0x1b0f8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0F8Cu;
    {
        const bool branch_taken_0x1b0f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F8Cu;
        // 0x1b0f90: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f8c) {
            ctx->pc = 0x1B0FA4u;
            goto label_1b0fa4;
        }
    }
    ctx->pc = 0x1B0F94u;
    // 0x1b0f94: 0x0  nop
    ctx->pc = 0x1b0f94u;
    // NOP
label_1b0f98:
    // 0x1b0f98: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b0f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0f9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B0F9Cu;
    {
        const bool branch_taken_0x1b0f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f9c) {
            ctx->pc = 0x1B0FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F9Cu;
            // 0x1b0fa0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0FA4u;
            goto label_1b0fa4;
        }
    }
    ctx->pc = 0x1B0FA4u;
label_1b0fa4:
    // 0x1b0fa4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b0fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0fa8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1b0fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0fac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b0facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b0fb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0fb4: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B0FB4u;
    SET_GPR_U32(ctx, 31, 0x1B0FBCu);
    ctx->pc = 0x1B0FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FB4u;
    // 0x1b0fb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC88u, 0x1B0FB4u, 0x1B0FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FBCu;
label_1b0fbc:
    // 0x1b0fbc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1b0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0fc0:
    // 0x1b0fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0fc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0fcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b0fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b0fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FD4u;
        // 0x1b0fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0FDCu;
    // 0x1b0fdc: 0x0  nop
    ctx->pc = 0x1b0fdcu;
    // NOP
    // 0x1b0fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0fe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b0fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b0fec: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B0FECu;
    SET_GPR_U32(ctx, 31, 0x1B0FF4u);
    ctx->pc = 0x1B0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FECu;
    // 0x1b0ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B0FECu, 0x1B0FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FF4u;
label_1b0ff4:
    // 0x1b0ff4: 0xc06c406  jal         func_1B1018
    ctx->pc = 0x1B0FF4u;
    SET_GPR_U32(ctx, 31, 0x1B0FFCu);
    ctx->pc = 0x1B0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FF4u;
    // 0x1b0ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1018u, 0x1B0FF4u, 0x1B0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FFCu;
label_1b0ffc:
    // 0x1b0ffc: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B0FFCu;
    SET_GPR_U32(ctx, 31, 0x1B1004u);
    ctx->pc = 0x1B1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FFCu;
    // 0x1b1000: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B0FFCu, 0x1B1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1004u;
label_1b1004:
    // 0x1b1004: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b100c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b100cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1010: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1010u;
        // 0x1b1014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1018u;
}
