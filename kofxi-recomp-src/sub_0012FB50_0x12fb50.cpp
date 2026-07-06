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

// Function: sub_0012FB50
// Address: 0x12fb50 - 0x12fdf0
void sub_0012FB50_0x12fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FB50_0x12fb50");
#endif

    switch (ctx->pc) {
        case 0x12fdd8u: goto label_12fdd8;
        default: break;
    }

    ctx->pc = 0x12fb50u;

    // 0x12fb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fb54: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x12fb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12fb58: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x12fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x12fb5c: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x12fb5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x12fb60: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x12fb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12fb64: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x12fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x12fb68: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x12fb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12fb6c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x12fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x12fb70: 0x10c30095  beq         $a2, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x12FB70u;
    {
        const bool branch_taken_0x12fb70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x12FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB70u;
        // 0x12fb74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb70) {
            ctx->pc = 0x12FDC8u;
            goto label_12fdc8;
        }
    }
    ctx->pc = 0x12FB78u;
    // 0x12fb78: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x12fb7c: 0x50c30031  beql        $a2, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x12FB7Cu;
    {
        const bool branch_taken_0x12fb7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fb7c) {
            ctx->pc = 0x12FB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FB7Cu;
            // 0x12fb80: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FC44u;
            goto label_12fc44;
        }
    }
    ctx->pc = 0x12FB84u;
    // 0x12fb84: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x12fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x12fb88: 0x10c3002d  beq         $a2, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x12FB88u;
    {
        const bool branch_taken_0x12fb88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fb88) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FB90u;
    // 0x12fb90: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x12fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x12fb94: 0x10c3002a  beq         $a2, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x12FB94u;
    {
        const bool branch_taken_0x12fb94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fb94) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FB9Cu;
    // 0x12fb9c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x12fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x12fba0: 0x10c30027  beq         $a2, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x12FBA0u;
    {
        const bool branch_taken_0x12fba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fba0) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FBA8u;
    // 0x12fba8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x12fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x12fbac: 0x10c30024  beq         $a2, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x12FBACu;
    {
        const bool branch_taken_0x12fbac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbac) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FBB4u;
    // 0x12fbb4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x12fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x12fbb8: 0x10c30021  beq         $a2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x12FBB8u;
    {
        const bool branch_taken_0x12fbb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbb8) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FBC0u;
    // 0x12fbc0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x12fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x12fbc4: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12FBC4u;
    {
        const bool branch_taken_0x12fbc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbc4) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FBCCu;
    // 0x12fbcc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x12fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x12fbd0: 0x10c3001b  beq         $a2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x12FBD0u;
    {
        const bool branch_taken_0x12fbd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbd0) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FBD8u;
    // 0x12fbd8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x12fbdc: 0x10c30018  beq         $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x12FBDCu;
    {
        const bool branch_taken_0x12fbdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbdc) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FBE4u;
    // 0x12fbe4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x12fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12fbe8: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12FBE8u;
    {
        const bool branch_taken_0x12fbe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbe8) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FBF0u;
    // 0x12fbf0: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x12fbf4: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12FBF4u;
    {
        const bool branch_taken_0x12fbf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbf4) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FBFCu;
    // 0x12fbfc: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x12fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x12fc00: 0x10c3000f  beq         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12FC00u;
    {
        const bool branch_taken_0x12fc00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fc00) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FC08u;
    // 0x12fc08: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x12fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x12fc0c: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12FC0Cu;
    {
        const bool branch_taken_0x12fc0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fc0c) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FC14u;
    // 0x12fc14: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x12fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12fc18: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12FC18u;
    {
        const bool branch_taken_0x12fc18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fc18) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FC20u;
    // 0x12fc20: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x12fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12fc24: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FC24u;
    {
        const bool branch_taken_0x12fc24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fc24) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FC2Cu;
    // 0x12fc2c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x12fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12fc30: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FC30u;
    {
        const bool branch_taken_0x12fc30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fc30) {
            ctx->pc = 0x12FC40u;
            goto label_12fc40;
        }
    }
    ctx->pc = 0x12FC38u;
    // 0x12fc38: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x12FC38u;
    {
        const bool branch_taken_0x12fc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc38) {
            ctx->pc = 0x12FDD0u;
            goto label_12fdd0;
        }
    }
    ctx->pc = 0x12FC40u;
label_12fc40:
    // 0x12fc40: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x12fc40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12fc44:
    // 0x12fc44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12fc48: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FC48u;
    {
        const bool branch_taken_0x12fc48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x12fc48) {
            ctx->pc = 0x12FC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FC48u;
            // 0x12fc4c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FC58u;
            goto label_12fc58;
        }
    }
    ctx->pc = 0x12FC50u;
    // 0x12fc50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12FC50u;
    {
        const bool branch_taken_0x12fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC50u;
        // 0x12fc54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc50) {
            ctx->pc = 0x12FC90u;
            goto label_12fc90;
        }
    }
    ctx->pc = 0x12FC58u;
label_12fc58:
    // 0x12fc58: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FC58u;
    {
        const bool branch_taken_0x12fc58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x12fc58) {
            ctx->pc = 0x12FC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FC58u;
            // 0x12fc5c: 0x3086000c  andi        $a2, $a0, 0xC (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FC68u;
            goto label_12fc68;
        }
    }
    ctx->pc = 0x12FC60u;
    // 0x12fc60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12FC60u;
    {
        const bool branch_taken_0x12fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC60u;
        // 0x12fc64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc60) {
            ctx->pc = 0x12FC90u;
            goto label_12fc90;
        }
    }
    ctx->pc = 0x12FC68u;
label_12fc68:
    // 0x12fc68: 0x30830030  andi        $v1, $a0, 0x30
    ctx->pc = 0x12fc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x12fc6c: 0x63882  srl         $a3, $a2, 2
    ctx->pc = 0x12fc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x12fc70: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x12fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x12fc74: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x12fc74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x12fc78: 0x248455b0  addiu       $a0, $a0, 0x55B0
    ctx->pc = 0x12fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21936));
    // 0x12fc7c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x12fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12fc80: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x12fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12fc84: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12fc88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12fc8c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x12fc8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_12fc90:
    // 0x12fc90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12fc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12fc94: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x12fc98: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x12fc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12fc9c: 0x24e75510  addiu       $a3, $a3, 0x5510
    ctx->pc = 0x12fc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21776));
    // 0x12fca0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fca4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x12fca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12fca8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x12fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fcac: 0x44040  sll         $t0, $a0, 1
    ctx->pc = 0x12fcacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12fcb0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x12fcb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x12fcb4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x12fcb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12fcb8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x12fcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x12fcbc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x12fcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x12fcc0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x12fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12fcc4: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x12fcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12fcc8: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x12fcc8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12fccc: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x12fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12fcd0: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x12FCD0u;
    {
        const bool branch_taken_0x12fcd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCD0u;
        // 0x12fcd4: 0xa0e40000  sb          $a0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcd0) {
            ctx->pc = 0x12FD50u;
            goto label_12fd50;
        }
    }
    ctx->pc = 0x12FCD8u;
    // 0x12fcd8: 0x3c043a83  lui         $a0, 0x3A83
    ctx->pc = 0x12fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14979 << 16));
    // 0x12fcdc: 0x3484126f  ori         $a0, $a0, 0x126F
    ctx->pc = 0x12fcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x12fce0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x12fce0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12fce4: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FCE4u;
    {
        const bool branch_taken_0x12fce4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x12fce4) {
            ctx->pc = 0x12FCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCE4u;
            // 0x12fce8: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FCF8u;
            goto label_12fcf8;
        }
    }
    ctx->pc = 0x12FCECu;
    // 0x12fcec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12fcecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fcf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FCF0u;
    {
        const bool branch_taken_0x12fcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCF0u;
        // 0x12fcf4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcf0) {
            ctx->pc = 0x12FD10u;
            goto label_12fd10;
        }
    }
    ctx->pc = 0x12FCF8u;
label_12fcf8:
    // 0x12fcf8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x12fcf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x12fcfc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x12fcfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12fd00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x12fd00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fd04: 0x0  nop
    ctx->pc = 0x12fd04u;
    // NOP
    // 0x12fd08: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x12fd08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12fd0c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x12fd0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_12fd10:
    // 0x12fd10: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x12fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fd14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12fd18: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x12fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fd1c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x12fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12fd20: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x12fd24: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12fd28: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x12fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x12fd2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fd30: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fd34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fd38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fd3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12fd3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fd40: 0x0  nop
    ctx->pc = 0x12fd40u;
    // NOP
    // 0x12fd44: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x12fd44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x12fd48: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x12FD48u;
    {
        const bool branch_taken_0x12fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD48u;
        // 0x12fd4c: 0x4602181d  msub.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd48) {
            ctx->pc = 0x12FDD8u;
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FD50u;
label_12fd50:
    // 0x12fd50: 0x3c043a83  lui         $a0, 0x3A83
    ctx->pc = 0x12fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14979 << 16));
    // 0x12fd54: 0x3484126f  ori         $a0, $a0, 0x126F
    ctx->pc = 0x12fd54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x12fd58: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x12fd58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12fd5c: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FD5Cu;
    {
        const bool branch_taken_0x12fd5c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x12fd5c) {
            ctx->pc = 0x12FD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FD5Cu;
            // 0x12fd60: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD70u;
            goto label_12fd70;
        }
    }
    ctx->pc = 0x12FD64u;
    // 0x12fd64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12fd64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fd68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FD68u;
    {
        const bool branch_taken_0x12fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD68u;
        // 0x12fd6c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd68) {
            ctx->pc = 0x12FD88u;
            goto label_12fd88;
        }
    }
    ctx->pc = 0x12FD70u;
label_12fd70:
    // 0x12fd70: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x12fd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x12fd74: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x12fd74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12fd78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x12fd78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fd7c: 0x0  nop
    ctx->pc = 0x12fd7cu;
    // NOP
    // 0x12fd80: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x12fd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12fd84: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x12fd84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_12fd88:
    // 0x12fd88: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x12fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fd8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12fd90: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x12fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fd94: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x12fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12fd98: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x12fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x12fd9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x12fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12fda0: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x12fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x12fda4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fda8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fdac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fdb0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fdb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12fdb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fdb8: 0x0  nop
    ctx->pc = 0x12fdb8u;
    // NOP
    // 0x12fdbc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x12fdbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x12fdc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12FDC0u;
    {
        const bool branch_taken_0x12fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDC0u;
        // 0x12fdc4: 0x4602181c  madd.s      $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdc0) {
            ctx->pc = 0x12FDD8u;
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FDC8u;
label_12fdc8:
    // 0x12fdc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12FDC8u;
    {
        const bool branch_taken_0x12fdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDC8u;
        // 0x12fdcc: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdc8) {
            ctx->pc = 0x12FDD8u;
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FDD0u;
label_12fdd0:
    // 0x12fdd0: 0xc068158  jal         func_1A0560
    ctx->pc = 0x12FDD0u;
    SET_GPR_U32(ctx, 31, 0x12FDD8u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x12FDD0u, 0x12FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDD8u;
label_12fdd8:
    // 0x12fdd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fddc: 0x3e00008  jr          $ra
    ctx->pc = 0x12FDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDDCu;
        // 0x12fde0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FDE4u;
    // 0x12fde4: 0x0  nop
    ctx->pc = 0x12fde4u;
    // NOP
    // 0x12fde8: 0x0  nop
    ctx->pc = 0x12fde8u;
    // NOP
    // 0x12fdec: 0x0  nop
    ctx->pc = 0x12fdecu;
    // NOP
    if (ctx->pc == 0x12fdecu) { ctx->pc = 0x12fdf0u; }
}
