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

// Function: sub_00166EB0
// Address: 0x166eb0 - 0x167020
void sub_00166EB0_0x166eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166EB0_0x166eb0");
#endif

    switch (ctx->pc) {
        case 0x166ed0u: goto label_166ed0;
        case 0x166f00u: goto label_166f00;
        case 0x166f30u: goto label_166f30;
        case 0x166f40u: goto label_166f40;
        default: break;
    }

    ctx->pc = 0x166eb0u;

    // 0x166eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x166eb4: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x166eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x166eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166ebc: 0x25083010  addiu       $t0, $t0, 0x3010
    ctx->pc = 0x166ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12304));
    // 0x166ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166ec4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x166ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x166ec8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x166ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ecc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x166eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_166ed0:
    // 0x166ed0: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x166ed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x166ed4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x166ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x166ed8: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x166ed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x166edc: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x166edcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x166ee0: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x166ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x166ee4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x166ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x166ee8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x166EE8u;
    {
        const bool branch_taken_0x166ee8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x166EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EE8u;
        // 0x166eec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ee8) {
            ctx->pc = 0x166ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166ed0;
        }
    }
    ctx->pc = 0x166EF0u;
    // 0x166ef0: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x166ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x166ef4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x166ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x166ef8: 0x25083030  addiu       $t0, $t0, 0x3030
    ctx->pc = 0x166ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12336));
    // 0x166efc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x166efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_166f00:
    // 0x166f00: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x166f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x166f04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x166f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x166f08: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x166f08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x166f0c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x166f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x166f10: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x166f10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x166f14: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x166f18: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x166F18u;
    {
        const bool branch_taken_0x166f18 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x166F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F18u;
        // 0x166f1c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f18) {
            ctx->pc = 0x166F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166f00;
        }
    }
    ctx->pc = 0x166F20u;
    // 0x166f20: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166F20u;
    {
        const bool branch_taken_0x166f20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x166f20) {
            ctx->pc = 0x166F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166F20u;
            // 0x166f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166F38u;
            goto label_166f38;
        }
    }
    ctx->pc = 0x166F28u;
    // 0x166f28: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x166F28u;
    SET_GPR_U32(ctx, 31, 0x166F30u);
    ctx->pc = 0x166F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166F28u;
    // 0x166f2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x166F28u, 0x166F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F30u;
label_166f30:
    // 0x166f30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166F30u;
    {
        const bool branch_taken_0x166f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F30u;
        // 0x166f34: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f30) {
            ctx->pc = 0x166F44u;
            goto label_166f44;
        }
    }
    ctx->pc = 0x166F38u;
label_166f38:
    // 0x166f38: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x166F38u;
    SET_GPR_U32(ctx, 31, 0x166F40u);
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x166F38u, 0x166F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166F40u;
label_166f40:
    // 0x166f40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x166f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_166f44:
    // 0x166f44: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x166f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x166f48: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166F48u;
    {
        const bool branch_taken_0x166f48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x166F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F48u;
        // 0x166f4c: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f48) {
            ctx->pc = 0x166F58u;
            goto label_166f58;
        }
    }
    ctx->pc = 0x166F50u;
    // 0x166f50: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x166F50u;
    {
        const bool branch_taken_0x166f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F50u;
        // 0x166f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f50) {
            ctx->pc = 0x167004u;
            goto label_167004;
        }
    }
    ctx->pc = 0x166F58u;
label_166f58:
    // 0x166f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166f5c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x166F5Cu;
    {
        const bool branch_taken_0x166f5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x166f5c) {
            ctx->pc = 0x166F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166F5Cu;
            // 0x166f60: 0x28a10012  slti        $at, $a1, 0x12 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166F78u;
            goto label_166f78;
        }
    }
    ctx->pc = 0x166F64u;
    // 0x166f64: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x166f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x166f68: 0x54600026  bnel        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x166F68u;
    {
        const bool branch_taken_0x166f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166f68) {
            ctx->pc = 0x166F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166F68u;
            // 0x166f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167004u;
            goto label_167004;
        }
    }
    ctx->pc = 0x166F70u;
    // 0x166f70: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x166F70u;
    {
        const bool branch_taken_0x166f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166F70u;
        // 0x166f74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166f70) {
            ctx->pc = 0x167008u;
            goto label_167008;
        }
    }
    ctx->pc = 0x166F78u;
label_166f78:
    // 0x166f78: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x166F78u;
    {
        const bool branch_taken_0x166f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x166f78) {
            ctx->pc = 0x166F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166F78u;
            // 0x166f7c: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166FB4u;
            goto label_166fb4;
        }
    }
    ctx->pc = 0x166F80u;
    // 0x166f80: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x166f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x166f84: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x166f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x166f88: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x166f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x166f8c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x166f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x166f90: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x166f90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x166f94: 0x9463003c  lhu         $v1, 0x3C($v1)
    ctx->pc = 0x166f94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x166f98: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x166f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x166f9c: 0x94840020  lhu         $a0, 0x20($a0)
    ctx->pc = 0x166f9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x166fa0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x166fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x166fa4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x166FA4u;
    {
        const bool branch_taken_0x166fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166fa4) {
            ctx->pc = 0x167000u;
            goto label_167000;
        }
    }
    ctx->pc = 0x166FACu;
    // 0x166fac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x166FACu;
    {
        const bool branch_taken_0x166fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166fac) {
            ctx->pc = 0x167004u;
            goto label_167004;
        }
    }
    ctx->pc = 0x166FB4u;
label_166fb4:
    // 0x166fb4: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166FB4u;
    {
        const bool branch_taken_0x166fb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x166fb4) {
            ctx->pc = 0x166FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166FB4u;
            // 0x166fb8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166FCCu;
            goto label_166fcc;
        }
    }
    ctx->pc = 0x166FBCu;
    // 0x166fbc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x166FBCu;
    {
        const bool branch_taken_0x166fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166fbc) {
            ctx->pc = 0x167000u;
            goto label_167000;
        }
    }
    ctx->pc = 0x166FC4u;
    // 0x166fc4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x166FC4u;
    {
        const bool branch_taken_0x166fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166fc4) {
            ctx->pc = 0x167004u;
            goto label_167004;
        }
    }
    ctx->pc = 0x166FCCu;
label_166fcc:
    // 0x166fcc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x166fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x166fd0: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x166fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x166fd4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x166fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x166fd8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x166fdc: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x166fdcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x166fe0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x166fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x166fe4: 0x94840020  lhu         $a0, 0x20($a0)
    ctx->pc = 0x166fe4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x166fe8: 0x601827  not         $v1, $v1
    ctx->pc = 0x166fe8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x166fec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x166fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x166ff0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166FF0u;
    {
        const bool branch_taken_0x166ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ff0) {
            ctx->pc = 0x167000u;
            goto label_167000;
        }
    }
    ctx->pc = 0x166FF8u;
    // 0x166ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166FF8u;
    {
        const bool branch_taken_0x166ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ff8) {
            ctx->pc = 0x167004u;
            goto label_167004;
        }
    }
    ctx->pc = 0x167000u;
label_167000:
    // 0x167000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x167000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167004:
    // 0x167004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167008:
    // 0x167008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16700c: 0x3e00008  jr          $ra
    ctx->pc = 0x16700Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16700Cu;
        // 0x167010: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16700Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167014u;
    // 0x167014: 0x0  nop
    ctx->pc = 0x167014u;
    // NOP
    // 0x167018: 0x0  nop
    ctx->pc = 0x167018u;
    // NOP
    // 0x16701c: 0x0  nop
    ctx->pc = 0x16701cu;
    // NOP
    if (ctx->pc == 0x16701cu) { ctx->pc = 0x167020u; }
}
