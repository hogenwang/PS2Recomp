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

// Function: sub_00200E30
// Address: 0x200e30 - 0x201088
void sub_00200E30_0x200e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200E30_0x200e30");
#endif

    switch (ctx->pc) {
        case 0x200e6cu: goto label_200e6c;
        case 0x200f44u: goto label_200f44;
        case 0x200f7cu: goto label_200f7c;
        case 0x200fb8u: goto label_200fb8;
        case 0x200ff4u: goto label_200ff4;
        case 0x201004u: goto label_201004;
        case 0x201008u: goto label_201008;
        default: break;
    }

    ctx->pc = 0x200e30u;

    // 0x200e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200e34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200e40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x200e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x200e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200e4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x200e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x200e50: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x200e50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x200e54: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200E54u;
    {
        const bool branch_taken_0x200e54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E54u;
        // 0x200e58: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e54) {
            ctx->pc = 0x200E70u;
            goto label_200e70;
        }
    }
    ctx->pc = 0x200E5Cu;
    // 0x200e5c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x200e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x200e60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e64: 0xc080554  jal         func_201550
    ctx->pc = 0x200E64u;
    SET_GPR_U32(ctx, 31, 0x200E6Cu);
    ctx->pc = 0x200E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E64u;
    // 0x200e68: 0x24a5f0f8  addiu       $a1, $a1, -0xF08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201550u, 0x200E64u, 0x200E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E6Cu;
label_200e6c:
    // 0x200e6c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x200e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_200e70:
    // 0x200e70: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x200e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x200e74: 0x1202005c  beq         $s0, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x200E74u;
    {
        const bool branch_taken_0x200e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E74u;
        // 0x200e78: 0x2a020062  slti        $v0, $s0, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e74) {
            ctx->pc = 0x200FE8u;
            goto label_200fe8;
        }
    }
    ctx->pc = 0x200E7Cu;
    // 0x200e7c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x200E7Cu;
    {
        const bool branch_taken_0x200e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E7Cu;
        // 0x200e80: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e7c) {
            ctx->pc = 0x200ED0u;
            goto label_200ed0;
        }
    }
    ctx->pc = 0x200E84u;
    // 0x200e84: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x200e88: 0x12020047  beq         $s0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x200E88u;
    {
        const bool branch_taken_0x200e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E88u;
        // 0x200e8c: 0x2a020032  slti        $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e88) {
            ctx->pc = 0x200FA8u;
            goto label_200fa8;
        }
    }
    ctx->pc = 0x200E90u;
    // 0x200e90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200E90u;
    {
        const bool branch_taken_0x200e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E90u;
        // 0x200e94: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e90) {
            ctx->pc = 0x200EB8u;
            goto label_200eb8;
        }
    }
    ctx->pc = 0x200E98u;
    // 0x200e98: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x200e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x200e9c: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x200E9Cu;
    {
        const bool branch_taken_0x200e9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E9Cu;
        // 0x200ea0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e9c) {
            ctx->pc = 0x200F00u;
            goto label_200f00;
        }
    }
    ctx->pc = 0x200EA4u;
    // 0x200ea4: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x200EA4u;
    {
        const bool branch_taken_0x200ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EA4u;
        // 0x200ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ea4) {
            ctx->pc = 0x200F70u;
            goto label_200f70;
        }
    }
    ctx->pc = 0x200EACu;
    // 0x200eac: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x200EACu;
    {
        const bool branch_taken_0x200eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EACu;
        // 0x200eb0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200eac) {
            ctx->pc = 0x201064u;
            goto label_201064;
        }
    }
    ctx->pc = 0x200EB4u;
    // 0x200eb4: 0x0  nop
    ctx->pc = 0x200eb4u;
    // NOP
label_200eb8:
    // 0x200eb8: 0x1202004b  beq         $s0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x200EB8u;
    {
        const bool branch_taken_0x200eb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EB8u;
        // 0x200ebc: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200eb8) {
            ctx->pc = 0x200FE8u;
            goto label_200fe8;
        }
    }
    ctx->pc = 0x200EC0u;
    // 0x200ec0: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x200EC0u;
    {
        const bool branch_taken_0x200ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EC0u;
        // 0x200ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ec0) {
            ctx->pc = 0x200FE8u;
            goto label_200fe8;
        }
    }
    ctx->pc = 0x200EC8u;
    // 0x200ec8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x200EC8u;
    {
        const bool branch_taken_0x200ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EC8u;
        // 0x200ecc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ec8) {
            ctx->pc = 0x201064u;
            goto label_201064;
        }
    }
    ctx->pc = 0x200ED0u;
label_200ed0:
    // 0x200ed0: 0x12020057  beq         $s0, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x200ED0u;
    {
        const bool branch_taken_0x200ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ED0u;
        // 0x200ed4: 0x2a020102  slti        $v0, $s0, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ed0) {
            ctx->pc = 0x201030u;
            goto label_201030;
        }
    }
    ctx->pc = 0x200ED8u;
    // 0x200ed8: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x200ED8u;
    {
        const bool branch_taken_0x200ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ED8u;
        // 0x200edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ed8) {
            ctx->pc = 0x201060u;
            goto label_201060;
        }
    }
    ctx->pc = 0x200EE0u;
    // 0x200ee0: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x200ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x200ee4: 0x1202005e  beq         $s0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x200EE4u;
    {
        const bool branch_taken_0x200ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EE4u;
        // 0x200ee8: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ee4) {
            ctx->pc = 0x201060u;
            goto label_201060;
        }
    }
    ctx->pc = 0x200EECu;
    // 0x200eec: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x200EECu;
    {
        const bool branch_taken_0x200eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x200EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EECu;
        // 0x200ef0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200eec) {
            ctx->pc = 0x200F3Cu;
            goto label_200f3c;
        }
    }
    ctx->pc = 0x200EF4u;
    // 0x200ef4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x200EF4u;
    {
        const bool branch_taken_0x200ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EF4u;
        // 0x200ef8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ef4) {
            ctx->pc = 0x201068u;
            goto label_201068;
        }
    }
    ctx->pc = 0x200EFCu;
    // 0x200efc: 0x0  nop
    ctx->pc = 0x200efcu;
    // NOP
label_200f00:
    // 0x200f00: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x200f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x200f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200f08: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x200F08u;
    {
        const bool branch_taken_0x200f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x200F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F08u;
        // 0x200f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f08) {
            ctx->pc = 0x200F38u;
            goto label_200f38;
        }
    }
    ctx->pc = 0x200F10u;
    // 0x200f10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200f14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200f1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x200f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200f20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200f28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200f30: 0x8080422  j           func_201088
    ctx->pc = 0x200F30u;
    ctx->pc = 0x200F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F30u;
    // 0x200f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201088u;
    sub_00201088_0x201088(rdram, ctx, runtime); return;
    ctx->pc = 0x200F38u;
label_200f38:
    // 0x200f38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200f3c:
    // 0x200f3c: 0xc08025c  jal         func_200970
    ctx->pc = 0x200F3Cu;
    SET_GPR_U32(ctx, 31, 0x200F44u);
    ctx->pc = 0x200F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F3Cu;
    // 0x200f40: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200970u, 0x200F3Cu, 0x200F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F44u;
label_200f44:
    // 0x200f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200f50: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x200f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200f54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200f5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x200f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200f64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200f68: 0x8080422  j           func_201088
    ctx->pc = 0x200F68u;
    ctx->pc = 0x200F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F68u;
    // 0x200f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201088u;
    sub_00201088_0x201088(rdram, ctx, runtime); return;
    ctx->pc = 0x200F70u;
label_200f70:
    // 0x200f70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f74: 0xc08025c  jal         func_200970
    ctx->pc = 0x200F74u;
    SET_GPR_U32(ctx, 31, 0x200F7Cu);
    ctx->pc = 0x200F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F74u;
    // 0x200f78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200970u, 0x200F74u, 0x200F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F7Cu;
label_200f7c:
    // 0x200f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200f84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200f88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x200f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200f94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200f98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200f9c: 0x80804a0  j           func_201280
    ctx->pc = 0x200F9Cu;
    ctx->pc = 0x200FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F9Cu;
    // 0x200fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201280u, 0x200F9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x200FA4u;
    // 0x200fa4: 0x0  nop
    ctx->pc = 0x200fa4u;
    // NOP
label_200fa8:
    // 0x200fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fb0: 0xc08025c  jal         func_200970
    ctx->pc = 0x200FB0u;
    SET_GPR_U32(ctx, 31, 0x200FB8u);
    ctx->pc = 0x200FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FB0u;
    // 0x200fb4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200970u, 0x200FB0u, 0x200FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FB8u;
label_200fb8:
    // 0x200fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200fc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200fc4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x200fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200fc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x200fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200fdc: 0x8080422  j           func_201088
    ctx->pc = 0x200FDCu;
    ctx->pc = 0x200FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FDCu;
    // 0x200fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201088u;
    sub_00201088_0x201088(rdram, ctx, runtime); return;
    ctx->pc = 0x200FE4u;
    // 0x200fe4: 0x0  nop
    ctx->pc = 0x200fe4u;
    // NOP
label_200fe8:
    // 0x200fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fec: 0xc08024e  jal         func_200938
    ctx->pc = 0x200FECu;
    SET_GPR_U32(ctx, 31, 0x200FF4u);
    ctx->pc = 0x200FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FECu;
    // 0x200ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200938u, 0x200FECu, 0x200FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FF4u;
label_200ff4:
    // 0x200ff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ff8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ffc: 0xc08025c  jal         func_200970
    ctx->pc = 0x200FFCu;
    SET_GPR_U32(ctx, 31, 0x201004u);
    ctx->pc = 0x201000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FFCu;
    // 0x201000: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200970u, 0x200FFCu, 0x201004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201004u;
label_201004:
    // 0x201004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201008:
    // 0x201008: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20100c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20100cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201010: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x201010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201014: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x201014u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20101c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20101cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x201024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201028: 0x8080422  j           func_201088
    ctx->pc = 0x201028u;
    ctx->pc = 0x20102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201028u;
    // 0x20102c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201088u;
    sub_00201088_0x201088(rdram, ctx, runtime); return;
    ctx->pc = 0x201030u;
label_201030:
    // 0x201030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20103c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20103cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201040: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x201040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201044: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x201044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20104c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20104cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x201050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201054: 0x8080422  j           func_201088
    ctx->pc = 0x201054u;
    ctx->pc = 0x201058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201054u;
    // 0x201058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201088u;
    sub_00201088_0x201088(rdram, ctx, runtime); return;
    ctx->pc = 0x20105Cu;
    // 0x20105c: 0x0  nop
    ctx->pc = 0x20105cu;
    // NOP
label_201060:
    // 0x201060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_201064:
    // 0x201064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201068:
    // 0x201068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20106c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x20106cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x201070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201074: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x201074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201078: 0x24c6f100  addiu       $a2, $a2, -0xF00
    ctx->pc = 0x201078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963456));
    // 0x20107c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20107cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201080: 0x808063e  j           func_2018F8
    ctx->pc = 0x201080u;
    ctx->pc = 0x201084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201080u;
    // 0x201084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    sub_002018F8_0x2018f8(rdram, ctx, runtime); return;
    ctx->pc = 0x201088u;
}
