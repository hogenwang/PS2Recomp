#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164EA0
// Address: 0x164ea0 - 0x1651b0
void sub_00164EA0_0x164ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164EA0_0x164ea0");
#endif

    switch (ctx->pc) {
        case 0x1650c0u: goto label_1650c0;
        case 0x1650e8u: goto label_1650e8;
        default: break;
    }

    ctx->pc = 0x164ea0u;

    // 0x164ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164ea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164eb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x164eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164eb4: 0x32028000  andi        $v0, $s0, 0x8000
    ctx->pc = 0x164eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x164eb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164EB8u;
    {
        const bool branch_taken_0x164eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EB8u;
            // 0x164ebc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164eb8) {
            ctx->pc = 0x164EC8u;
            goto label_164ec8;
        }
    }
    ctx->pc = 0x164EC0u;
    // 0x164ec0: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x164EC0u;
    {
        const bool branch_taken_0x164ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EC0u;
            // 0x164ec4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ec0) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x164EC8u;
label_164ec8:
    // 0x164ec8: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x164ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x164ecc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x164ECCu;
    {
        const bool branch_taken_0x164ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ecc) {
            ctx->pc = 0x164ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164ECCu;
            // 0x164ed0: 0x32022000  andi        $v0, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x164EF0u;
            goto label_164ef0;
        }
    }
    ctx->pc = 0x164ED4u;
    // 0x164ed4: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x164ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x164ed8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x164ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x164edc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164EDCu;
    {
        const bool branch_taken_0x164edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164edc) {
            ctx->pc = 0x164EECu;
            goto label_164eec;
        }
    }
    ctx->pc = 0x164EE4u;
    // 0x164ee4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x164EE4u;
    {
        const bool branch_taken_0x164ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164EE4u;
            // 0x164ee8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ee4) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x164EECu;
label_164eec:
    // 0x164eec: 0x32022000  andi        $v0, $s0, 0x2000
    ctx->pc = 0x164eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_164ef0:
    // 0x164ef0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x164EF0u;
    {
        const bool branch_taken_0x164ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ef0) {
            ctx->pc = 0x164EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164EF0u;
            // 0x164ef4: 0x32021000  andi        $v0, $s0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x164F38u;
            goto label_164f38;
        }
    }
    ctx->pc = 0x164EF8u;
    // 0x164ef8: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x164ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x164efc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x164efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x164f00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164f04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164F04u;
    {
        const bool branch_taken_0x164f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f04) {
            ctx->pc = 0x164F34u;
            goto label_164f34;
        }
    }
    ctx->pc = 0x164F0Cu;
    // 0x164f0c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x164f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x164f10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164f14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164F14u;
    {
        const bool branch_taken_0x164f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f14) {
            ctx->pc = 0x164F34u;
            goto label_164f34;
        }
    }
    ctx->pc = 0x164F1Cu;
    // 0x164f1c: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x164f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x164f20: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x164f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x164f24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164F24u;
    {
        const bool branch_taken_0x164f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f24) {
            ctx->pc = 0x164F34u;
            goto label_164f34;
        }
    }
    ctx->pc = 0x164F2Cu;
    // 0x164f2c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x164F2Cu;
    {
        const bool branch_taken_0x164f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F2Cu;
            // 0x164f30: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f2c) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x164F34u;
label_164f34:
    // 0x164f34: 0x32021000  andi        $v0, $s0, 0x1000
    ctx->pc = 0x164f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4096);
label_164f38:
    // 0x164f38: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x164F38u;
    {
        const bool branch_taken_0x164f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f38) {
            ctx->pc = 0x164F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164F38u;
            // 0x164f3c: 0x32020800  andi        $v0, $s0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x164F80u;
            goto label_164f80;
        }
    }
    ctx->pc = 0x164F40u;
    // 0x164f40: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x164f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x164f44: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x164f48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164f4c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164F4Cu;
    {
        const bool branch_taken_0x164f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164f4c) {
            ctx->pc = 0x164F7Cu;
            goto label_164f7c;
        }
    }
    ctx->pc = 0x164F54u;
    // 0x164f54: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x164f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x164f58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164f5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164F5Cu;
    {
        const bool branch_taken_0x164f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f5c) {
            ctx->pc = 0x164F7Cu;
            goto label_164f7c;
        }
    }
    ctx->pc = 0x164F64u;
    // 0x164f64: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x164f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x164f68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x164f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x164f6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164F6Cu;
    {
        const bool branch_taken_0x164f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f6c) {
            ctx->pc = 0x164F7Cu;
            goto label_164f7c;
        }
    }
    ctx->pc = 0x164F74u;
    // 0x164f74: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x164F74u;
    {
        const bool branch_taken_0x164f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F74u;
            // 0x164f78: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f74) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x164F7Cu;
label_164f7c:
    // 0x164f7c: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x164f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_164f80:
    // 0x164f80: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x164F80u;
    {
        const bool branch_taken_0x164f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f80) {
            ctx->pc = 0x164F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164F80u;
            // 0x164f84: 0x32020400  andi        $v0, $s0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x164FC4u;
            goto label_164fc4;
        }
    }
    ctx->pc = 0x164F88u;
    // 0x164f88: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x164f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x164f8c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x164f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x164f90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164f94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x164F94u;
    {
        const bool branch_taken_0x164f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164f94) {
            ctx->pc = 0x164FC0u;
            goto label_164fc0;
        }
    }
    ctx->pc = 0x164F9Cu;
    // 0x164f9c: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x164f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x164fa0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164FA0u;
    {
        const bool branch_taken_0x164fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fa0) {
            ctx->pc = 0x164FC0u;
            goto label_164fc0;
        }
    }
    ctx->pc = 0x164FA8u;
    // 0x164fa8: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x164fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x164fac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x164facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x164fb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164FB0u;
    {
        const bool branch_taken_0x164fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fb0) {
            ctx->pc = 0x164FC0u;
            goto label_164fc0;
        }
    }
    ctx->pc = 0x164FB8u;
    // 0x164fb8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x164FB8u;
    {
        const bool branch_taken_0x164fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164FB8u;
            // 0x164fbc: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fb8) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x164FC0u;
label_164fc0:
    // 0x164fc0: 0x32020400  andi        $v0, $s0, 0x400
    ctx->pc = 0x164fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
label_164fc4:
    // 0x164fc4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x164FC4u;
    {
        const bool branch_taken_0x164fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fc4) {
            ctx->pc = 0x164FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164FC4u;
            // 0x164fc8: 0x32020200  andi        $v0, $s0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16500Cu;
            goto label_16500c;
        }
    }
    ctx->pc = 0x164FCCu;
    // 0x164fcc: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x164fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x164fd0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x164fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x164fd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164fd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164FD8u;
    {
        const bool branch_taken_0x164fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fd8) {
            ctx->pc = 0x165008u;
            goto label_165008;
        }
    }
    ctx->pc = 0x164FE0u;
    // 0x164fe0: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x164fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x164fe4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x164fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x164fe8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164FE8u;
    {
        const bool branch_taken_0x164fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fe8) {
            ctx->pc = 0x165008u;
            goto label_165008;
        }
    }
    ctx->pc = 0x164FF0u;
    // 0x164ff0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x164ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x164ff4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164FF8u;
    {
        const bool branch_taken_0x164ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ff8) {
            ctx->pc = 0x165008u;
            goto label_165008;
        }
    }
    ctx->pc = 0x165000u;
    // 0x165000: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x165000u;
    {
        const bool branch_taken_0x165000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165000u;
            // 0x165004: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165000) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165008u;
label_165008:
    // 0x165008: 0x32020200  andi        $v0, $s0, 0x200
    ctx->pc = 0x165008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
label_16500c:
    // 0x16500c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x16500Cu;
    {
        const bool branch_taken_0x16500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16500c) {
            ctx->pc = 0x165010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16500Cu;
            // 0x165010: 0x32020080  andi        $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165068u;
            goto label_165068;
        }
    }
    ctx->pc = 0x165014u;
    // 0x165014: 0x8e240494  lw          $a0, 0x494($s1)
    ctx->pc = 0x165014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165018: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x165018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x16501c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x16501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x165020: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x165020u;
    {
        const bool branch_taken_0x165020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165020) {
            ctx->pc = 0x165064u;
            goto label_165064;
        }
    }
    ctx->pc = 0x165028u;
    // 0x165028: 0x8e23049c  lw          $v1, 0x49C($s1)
    ctx->pc = 0x165028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
    // 0x16502c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x16502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x165030: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165034: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x165034u;
    {
        const bool branch_taken_0x165034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165034) {
            ctx->pc = 0x165064u;
            goto label_165064;
        }
    }
    ctx->pc = 0x16503Cu;
    // 0x16503c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x165040: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x165040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x165044: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165044u;
    {
        const bool branch_taken_0x165044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165044) {
            ctx->pc = 0x165064u;
            goto label_165064;
        }
    }
    ctx->pc = 0x16504Cu;
    // 0x16504c: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x16504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x165050: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x165050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x165054: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165054u;
    {
        const bool branch_taken_0x165054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165054) {
            ctx->pc = 0x165064u;
            goto label_165064;
        }
    }
    ctx->pc = 0x16505Cu;
    // 0x16505c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x16505Cu;
    {
        const bool branch_taken_0x16505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16505Cu;
            // 0x165060: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16505c) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165064u;
label_165064:
    // 0x165064: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x165064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_165068:
    // 0x165068: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165068u;
    {
        const bool branch_taken_0x165068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165068) {
            ctx->pc = 0x16506Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165068u;
            // 0x16506c: 0x32020100  andi        $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16508Cu;
            goto label_16508c;
        }
    }
    ctx->pc = 0x165070u;
    // 0x165070: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x165070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165074: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x165074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x165078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165078u;
    {
        const bool branch_taken_0x165078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165078) {
            ctx->pc = 0x165088u;
            goto label_165088;
        }
    }
    ctx->pc = 0x165080u;
    // 0x165080: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x165080u;
    {
        const bool branch_taken_0x165080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165080u;
            // 0x165084: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165080) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165088u;
label_165088:
    // 0x165088: 0x32020100  andi        $v0, $s0, 0x100
    ctx->pc = 0x165088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
label_16508c:
    // 0x16508c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16508Cu;
    {
        const bool branch_taken_0x16508c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16508c) {
            ctx->pc = 0x165090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16508Cu;
            // 0x165090: 0x32020040  andi        $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1650B0u;
            goto label_1650b0;
        }
    }
    ctx->pc = 0x165094u;
    // 0x165094: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165098: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x165098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x16509c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16509Cu;
    {
        const bool branch_taken_0x16509c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16509c) {
            ctx->pc = 0x1650ACu;
            goto label_1650ac;
        }
    }
    ctx->pc = 0x1650A4u;
    // 0x1650a4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1650A4u;
    {
        const bool branch_taken_0x1650a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650A4u;
            // 0x1650a8: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650a4) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x1650ACu;
label_1650ac:
    // 0x1650ac: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x1650acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_1650b0:
    // 0x1650b0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1650B0u;
    {
        const bool branch_taken_0x1650b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650b0) {
            ctx->pc = 0x1650B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1650B0u;
            // 0x1650b4: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1650D8u;
            goto label_1650d8;
        }
    }
    ctx->pc = 0x1650B8u;
    // 0x1650b8: 0xc059534  jal         func_1654D0
    ctx->pc = 0x1650B8u;
    SET_GPR_U32(ctx, 31, 0x1650C0u);
    ctx->pc = 0x1650BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1650B8u;
            // 0x1650bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1654D0u;
    if (runtime->hasFunction(0x1654D0u)) {
        auto targetFn = runtime->lookupFunction(0x1654D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650C0u; }
        if (ctx->pc != 0x1650C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001654D0_0x1654d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650C0u; }
        if (ctx->pc != 0x1650C0u) { return; }
    }
    ctx->pc = 0x1650C0u;
label_1650c0:
    // 0x1650c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1650c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1650c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1650C4u;
    {
        const bool branch_taken_0x1650c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650c4) {
            ctx->pc = 0x1650D4u;
            goto label_1650d4;
        }
    }
    ctx->pc = 0x1650CCu;
    // 0x1650cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1650CCu;
    {
        const bool branch_taken_0x1650cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650CCu;
            // 0x1650d0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650cc) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x1650D4u;
label_1650d4:
    // 0x1650d4: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x1650d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_1650d8:
    // 0x1650d8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1650D8u;
    {
        const bool branch_taken_0x1650d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650d8) {
            ctx->pc = 0x1650DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1650D8u;
            // 0x1650dc: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165100u;
            goto label_165100;
        }
    }
    ctx->pc = 0x1650E0u;
    // 0x1650e0: 0xc059534  jal         func_1654D0
    ctx->pc = 0x1650E0u;
    SET_GPR_U32(ctx, 31, 0x1650E8u);
    ctx->pc = 0x1650E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1650E0u;
            // 0x1650e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1654D0u;
    if (runtime->hasFunction(0x1654D0u)) {
        auto targetFn = runtime->lookupFunction(0x1654D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650E8u; }
        if (ctx->pc != 0x1650E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001654D0_0x1654d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1650E8u; }
        if (ctx->pc != 0x1650E8u) { return; }
    }
    ctx->pc = 0x1650E8u;
label_1650e8:
    // 0x1650e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1650e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1650ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1650ECu;
    {
        const bool branch_taken_0x1650ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1650ec) {
            ctx->pc = 0x1650FCu;
            goto label_1650fc;
        }
    }
    ctx->pc = 0x1650F4u;
    // 0x1650f4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1650F4u;
    {
        const bool branch_taken_0x1650f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1650F4u;
            // 0x1650f8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650f4) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x1650FCu;
label_1650fc:
    // 0x1650fc: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x1650fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_165100:
    // 0x165100: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x165100u;
    {
        const bool branch_taken_0x165100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165100) {
            ctx->pc = 0x165104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165100u;
            // 0x165104: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165110u;
            goto label_165110;
        }
    }
    ctx->pc = 0x165108u;
    // 0x165108: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x165108u;
    {
        const bool branch_taken_0x165108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165108u;
            // 0x16510c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165108) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165110u;
label_165110:
    // 0x165110: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x165110u;
    {
        const bool branch_taken_0x165110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165110) {
            ctx->pc = 0x165114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165110u;
            // 0x165114: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165144u;
            goto label_165144;
        }
    }
    ctx->pc = 0x165118u;
    // 0x165118: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x165118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x16511c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x165120: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165124: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165124u;
    {
        const bool branch_taken_0x165124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165124) {
            ctx->pc = 0x165140u;
            goto label_165140;
        }
    }
    ctx->pc = 0x16512Cu;
    // 0x16512c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x16512cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x165130: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165130u;
    {
        const bool branch_taken_0x165130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165130) {
            ctx->pc = 0x165140u;
            goto label_165140;
        }
    }
    ctx->pc = 0x165138u;
    // 0x165138: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x165138u;
    {
        const bool branch_taken_0x165138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165138u;
            // 0x16513c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165138) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165140u;
label_165140:
    // 0x165140: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x165140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_165144:
    // 0x165144: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165144u;
    {
        const bool branch_taken_0x165144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165144) {
            ctx->pc = 0x165148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165144u;
            // 0x165148: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165168u;
            goto label_165168;
        }
    }
    ctx->pc = 0x16514Cu;
    // 0x16514c: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x16514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x165150: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x165150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x165154: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165154u;
    {
        const bool branch_taken_0x165154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165154) {
            ctx->pc = 0x165164u;
            goto label_165164;
        }
    }
    ctx->pc = 0x16515Cu;
    // 0x16515c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16515Cu;
    {
        const bool branch_taken_0x16515c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16515Cu;
            // 0x165160: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16515c) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165164u;
label_165164:
    // 0x165164: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x165164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_165168:
    // 0x165168: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165168u;
    {
        const bool branch_taken_0x165168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165168) {
            ctx->pc = 0x16516Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165168u;
            // 0x16516c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165170u;
    // 0x165170: 0x8e230498  lw          $v1, 0x498($s1)
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1176)));
    // 0x165174: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x165178: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16517c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16517Cu;
    {
        const bool branch_taken_0x16517c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16517c) {
            ctx->pc = 0x16518Cu;
            goto label_16518c;
        }
    }
    ctx->pc = 0x165184u;
    // 0x165184: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165184u;
    {
        const bool branch_taken_0x165184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165184u;
            // 0x165188: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165184) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x16518Cu;
label_16518c:
    // 0x16518c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16518cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165190:
    // 0x165190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16519c: 0x3e00008  jr          $ra
    ctx->pc = 0x16519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1651A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16519Cu;
            // 0x1651a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1651A4u;
    // 0x1651a4: 0x0  nop
    ctx->pc = 0x1651a4u;
    // NOP
    // 0x1651a8: 0x0  nop
    ctx->pc = 0x1651a8u;
    // NOP
    // 0x1651ac: 0x0  nop
    ctx->pc = 0x1651acu;
    // NOP
    ctx->pc = 0x1651b0u;
}
