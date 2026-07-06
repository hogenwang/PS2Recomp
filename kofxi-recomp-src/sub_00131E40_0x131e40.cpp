#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131E40
// Address: 0x131e40 - 0x132240
void sub_00131E40_0x131e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131E40_0x131e40");
#endif

    switch (ctx->pc) {
        case 0x132140u: goto label_132140;
        case 0x1321a4u: goto label_1321a4;
        case 0x13220cu: goto label_13220c;
        default: break;
    }

    ctx->pc = 0x131e40u;

    // 0x131e40: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x131E40u;
    {
        const bool branch_taken_0x131e40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131E40u;
            // 0x131e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e40) {
            ctx->pc = 0x131E78u;
            goto label_131e78;
        }
    }
    ctx->pc = 0x131E48u;
    // 0x131e48: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x131e48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x131e4c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x131e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x131e50: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x131e50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x131e54: 0x24c6c550  addiu       $a2, $a2, -0x3AB0
    ctx->pc = 0x131e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952272));
    // 0x131e58: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x131e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x131e5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x131e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131e60: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x131e60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x131e64: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x131e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x131e68: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x131e68u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131e6c: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131E6Cu;
    {
        const bool branch_taken_0x131e6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x131e6c) {
            ctx->pc = 0x131E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131E6Cu;
            // 0x131e70: 0x30a7ffff  andi        $a3, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x131E7Cu;
            goto label_131e7c;
        }
    }
    ctx->pc = 0x131E74u;
    // 0x131e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131e78:
    // 0x131e78: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x131e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_131e7c:
    // 0x131e7c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x131e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x131e80: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x131e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x131e84: 0x2463c550  addiu       $v1, $v1, -0x3AB0
    ctx->pc = 0x131e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952272));
    // 0x131e88: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x131e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x131e8c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x131e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x131e90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x131e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x131e94: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x131e94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131e98: 0x18600097  blez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x131E98u;
    {
        const bool branch_taken_0x131e98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x131e98) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131EA0u;
    // 0x131ea0: 0x24e3ffdf  addiu       $v1, $a3, -0x21
    ctx->pc = 0x131ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967263));
    // 0x131ea4: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x131ea4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x131ea8: 0x10200093  beqz        $at, . + 4 + (0x93 << 2)
    ctx->pc = 0x131EA8u;
    {
        const bool branch_taken_0x131ea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ea8) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131EB0u;
    // 0x131eb0: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x131eb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x131eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131eb8: 0x24c6c550  addiu       $a2, $a2, -0x3AB0
    ctx->pc = 0x131eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952272));
    // 0x131ebc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x131ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x131ec0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x131ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131ec4: 0x600008  jr          $v1
    ctx->pc = 0x131EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131ECCu: goto label_131ecc;
            case 0x131F00u: goto label_131f00;
            case 0x131F34u: goto label_131f34;
            case 0x131F68u: goto label_131f68;
            case 0x131F9Cu: goto label_131f9c;
            case 0x131FD0u: goto label_131fd0;
            case 0x132004u: goto label_132004;
            case 0x132038u: goto label_132038;
            case 0x132054u: goto label_132054;
            case 0x132070u: goto label_132070;
            case 0x13208Cu: goto label_13208c;
            case 0x1320A8u: goto label_1320a8;
            case 0x1320C4u: goto label_1320c4;
            case 0x1320E0u: goto label_1320e0;
            case 0x1320F8u: goto label_1320f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131ECCu;
label_131ecc:
    // 0x131ecc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131ed0: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x131ed0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x131ed4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x131ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x131ed8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131ED8u;
    {
        const bool branch_taken_0x131ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131ed8) {
            ctx->pc = 0x131EE4u;
            goto label_131ee4;
        }
    }
    ctx->pc = 0x131EE0u;
    // 0x131ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131ee4:
    // 0x131ee4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x131ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x131ee8: 0x8c63a210  lw          $v1, -0x5DF0($v1)
    ctx->pc = 0x131ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x131eec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x131eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x131ef0: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x131EF0u;
    {
        const bool branch_taken_0x131ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ef0) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131EF8u;
    // 0x131ef8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x131EF8u;
    {
        const bool branch_taken_0x131ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131EF8u;
            // 0x131efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ef8) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131F00u;
label_131f00:
    // 0x131f00: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131f04: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x131f04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x131f08: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x131f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x131f0c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131F0Cu;
    {
        const bool branch_taken_0x131f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f0c) {
            ctx->pc = 0x131F18u;
            goto label_131f18;
        }
    }
    ctx->pc = 0x131F14u;
    // 0x131f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131f18:
    // 0x131f18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x131f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x131f1c: 0x8c63a210  lw          $v1, -0x5DF0($v1)
    ctx->pc = 0x131f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x131f20: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x131f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x131f24: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x131F24u;
    {
        const bool branch_taken_0x131f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131f24) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131F2Cu;
    // 0x131f2c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x131F2Cu;
    {
        const bool branch_taken_0x131f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131F2Cu;
            // 0x131f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f2c) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131F34u;
label_131f34:
    // 0x131f34: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131f38: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x131f38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x131f3c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x131f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x131f40: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131F40u;
    {
        const bool branch_taken_0x131f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f40) {
            ctx->pc = 0x131F4Cu;
            goto label_131f4c;
        }
    }
    ctx->pc = 0x131F48u;
    // 0x131f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131f4c:
    // 0x131f4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x131f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x131f50: 0x8c63a210  lw          $v1, -0x5DF0($v1)
    ctx->pc = 0x131f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x131f54: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x131f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x131f58: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x131F58u;
    {
        const bool branch_taken_0x131f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131f58) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131F60u;
    // 0x131f60: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x131F60u;
    {
        const bool branch_taken_0x131f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131F60u;
            // 0x131f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f60) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131F68u;
label_131f68:
    // 0x131f68: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131f6c: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x131f6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x131f70: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x131f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x131f74: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131F74u;
    {
        const bool branch_taken_0x131f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f74) {
            ctx->pc = 0x131F80u;
            goto label_131f80;
        }
    }
    ctx->pc = 0x131F7Cu;
    // 0x131f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131f80:
    // 0x131f80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x131f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x131f84: 0x8c63a210  lw          $v1, -0x5DF0($v1)
    ctx->pc = 0x131f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x131f88: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x131f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x131f8c: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x131F8Cu;
    {
        const bool branch_taken_0x131f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131f8c) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131F94u;
    // 0x131f94: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x131F94u;
    {
        const bool branch_taken_0x131f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131F94u;
            // 0x131f98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131f94) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131F9Cu;
label_131f9c:
    // 0x131f9c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131fa0: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x131fa0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x131fa4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x131fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x131fa8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131FA8u;
    {
        const bool branch_taken_0x131fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131fa8) {
            ctx->pc = 0x131FB4u;
            goto label_131fb4;
        }
    }
    ctx->pc = 0x131FB0u;
    // 0x131fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131fb4:
    // 0x131fb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x131fb8: 0x8c63a210  lw          $v1, -0x5DF0($v1)
    ctx->pc = 0x131fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x131fbc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x131fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x131fc0: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x131FC0u;
    {
        const bool branch_taken_0x131fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131fc0) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131FC8u;
    // 0x131fc8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x131FC8u;
    {
        const bool branch_taken_0x131fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131FC8u;
            // 0x131fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131fc8) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131FD0u;
label_131fd0:
    // 0x131fd0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131fd4: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x131fd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x131fd8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x131fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x131fdc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x131FDCu;
    {
        const bool branch_taken_0x131fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131fdc) {
            ctx->pc = 0x131FE8u;
            goto label_131fe8;
        }
    }
    ctx->pc = 0x131FE4u;
    // 0x131fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131fe8:
    // 0x131fe8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x131fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x131fec: 0x8c63a210  lw          $v1, -0x5DF0($v1)
    ctx->pc = 0x131fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x131ff0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x131ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x131ff4: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x131FF4u;
    {
        const bool branch_taken_0x131ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ff4) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x131FFCu;
    // 0x131ffc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x131FFCu;
    {
        const bool branch_taken_0x131ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131FFCu;
            // 0x132000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ffc) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x132004u;
label_132004:
    // 0x132004: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132008: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x132008u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x13200c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x13200cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x132010: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x132010u;
    {
        const bool branch_taken_0x132010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132010) {
            ctx->pc = 0x13201Cu;
            goto label_13201c;
        }
    }
    ctx->pc = 0x132018u;
    // 0x132018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13201c:
    // 0x13201c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13201cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x132020: 0x8c63a210  lw          $v1, -0x5DF0($v1)
    ctx->pc = 0x132020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x132024: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x132024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x132028: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x132028u;
    {
        const bool branch_taken_0x132028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132028) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x132030u;
    // 0x132030: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x132030u;
    {
        const bool branch_taken_0x132030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132030u;
            // 0x132034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132030) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x132038u;
label_132038:
    // 0x132038: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13203c: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x13203cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x132040: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x132040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x132044: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x132044u;
    {
        const bool branch_taken_0x132044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132044) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x13204Cu;
    // 0x13204c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x13204Cu;
    {
        const bool branch_taken_0x13204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13204Cu;
            // 0x132050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13204c) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x132054u;
label_132054:
    // 0x132054: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132058: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x132058u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x13205c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x13205cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x132060: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x132060u;
    {
        const bool branch_taken_0x132060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132060) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x132068u;
    // 0x132068: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x132068u;
    {
        const bool branch_taken_0x132068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13206Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132068u;
            // 0x13206c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132068) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x132070u;
label_132070:
    // 0x132070: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x132070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132074: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x132074u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x132078: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x132078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13207c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x13207Cu;
    {
        const bool branch_taken_0x13207c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13207c) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x132084u;
    // 0x132084: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x132084u;
    {
        const bool branch_taken_0x132084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132084u;
            // 0x132088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132084) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x13208Cu;
label_13208c:
    // 0x13208c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13208cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x132090: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x132090u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x132094: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x132094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x132098: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x132098u;
    {
        const bool branch_taken_0x132098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132098) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x1320A0u;
    // 0x1320a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1320A0u;
    {
        const bool branch_taken_0x1320a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1320A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1320A0u;
            // 0x1320a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320a0) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x1320A8u;
label_1320a8:
    // 0x1320a8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1320a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1320ac: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x1320acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x1320b0: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1320b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1320b4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1320B4u;
    {
        const bool branch_taken_0x1320b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1320b4) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x1320BCu;
    // 0x1320bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1320BCu;
    {
        const bool branch_taken_0x1320bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1320C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1320BCu;
            // 0x1320c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320bc) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x1320C4u;
label_1320c4:
    // 0x1320c4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1320c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1320c8: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x1320c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x1320cc: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1320ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1320d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1320D0u;
    {
        const bool branch_taken_0x1320d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1320d0) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x1320D8u;
    // 0x1320d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1320D8u;
    {
        const bool branch_taken_0x1320d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1320DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1320D8u;
            // 0x1320dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320d8) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x1320E0u;
label_1320e0:
    // 0x1320e0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1320e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1320e4: 0x94635a98  lhu         $v1, 0x5A98($v1)
    ctx->pc = 0x1320e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x1320e8: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1320e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1320ec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1320ECu;
    {
        const bool branch_taken_0x1320ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1320ec) {
            ctx->pc = 0x1320F8u;
            goto label_1320f8;
        }
    }
    ctx->pc = 0x1320F4u;
    // 0x1320f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1320f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1320f8:
    // 0x1320f8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1320F8u;
    {
        const bool branch_taken_0x1320f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1320f8) {
            ctx->pc = 0x132160u;
            goto label_132160;
        }
    }
    ctx->pc = 0x132100u;
    // 0x132100: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x132100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x132104: 0x8c63a210  lw          $v1, -0x5DF0($v1)
    ctx->pc = 0x132104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943248)));
    // 0x132108: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x132108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13210c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13210Cu;
    {
        const bool branch_taken_0x13210c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13210c) {
            ctx->pc = 0x132160u;
            goto label_132160;
        }
    }
    ctx->pc = 0x132114u;
    // 0x132114: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x132114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x132118: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132118u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13211c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x13211cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132120: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x132120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x132124: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x132124u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x132128: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x132128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13212c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x13212cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x132130: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x132130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x132134: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x132134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x132138: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x132138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13213c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13213cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132140:
    // 0x132140: 0x91030150  lbu         $v1, 0x150($t0)
    ctx->pc = 0x132140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 336)));
    // 0x132144: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x132144u;
    {
        const bool branch_taken_0x132144 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x132144) {
            ctx->pc = 0x132150u;
            goto label_132150;
        }
    }
    ctx->pc = 0x13214Cu;
    // 0x13214c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x13214cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_132150:
    // 0x132150: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x132150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x132154: 0x29230003  slti        $v1, $t1, 0x3
    ctx->pc = 0x132154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x132158: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x132158u;
    {
        const bool branch_taken_0x132158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132158u;
            // 0x13215c: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132158) {
            ctx->pc = 0x132140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132140;
        }
    }
    ctx->pc = 0x132160u;
label_132160:
    // 0x132160: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x132160u;
    {
        const bool branch_taken_0x132160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132160) {
            ctx->pc = 0x1321C8u;
            goto label_1321c8;
        }
    }
    ctx->pc = 0x132168u;
    // 0x132168: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x132168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x13216c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x13216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x132170: 0x14c30015  bne         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x132170u;
    {
        const bool branch_taken_0x132170 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x132170) {
            ctx->pc = 0x1321C8u;
            goto label_1321c8;
        }
    }
    ctx->pc = 0x132178u;
    // 0x132178: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x132178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13217c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13217cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132180: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x132180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132184: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x132184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x132188: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x132188u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13218c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13218cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x132190: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x132190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x132194: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x132194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x132198: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x132198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13219c: 0x664821  addu        $t1, $v1, $a2
    ctx->pc = 0x13219cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1321a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1321a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1321a4:
    // 0x1321a4: 0x91230150  lbu         $v1, 0x150($t1)
    ctx->pc = 0x1321a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 336)));
    // 0x1321a8: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1321A8u;
    {
        const bool branch_taken_0x1321a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1321a8) {
            ctx->pc = 0x1321B8u;
            goto label_1321b8;
        }
    }
    ctx->pc = 0x1321B0u;
    // 0x1321b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1321b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1321b4: 0x0  nop
    ctx->pc = 0x1321b4u;
    // NOP
label_1321b8:
    // 0x1321b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1321b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1321bc: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x1321bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1321c0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1321C0u;
    {
        const bool branch_taken_0x1321c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1321C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1321C0u;
            // 0x1321c4: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1321c0) {
            ctx->pc = 0x1321A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1321a4;
        }
    }
    ctx->pc = 0x1321C8u;
label_1321c8:
    // 0x1321c8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1321C8u;
    {
        const bool branch_taken_0x1321c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1321c8) {
            ctx->pc = 0x132230u;
            goto label_132230;
        }
    }
    ctx->pc = 0x1321D0u;
    // 0x1321d0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1321d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1321d4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1321d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1321d8: 0x14a30015  bne         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1321D8u;
    {
        const bool branch_taken_0x1321d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1321d8) {
            ctx->pc = 0x132230u;
            goto label_132230;
        }
    }
    ctx->pc = 0x1321E0u;
    // 0x1321e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1321e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1321e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1321e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1321e8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1321e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1321ec: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1321ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1321f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1321f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1321f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1321f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1321f8: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1321f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x1321fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1321fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x132200: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x132200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x132204: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x132204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132208: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x132208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13220c:
    // 0x13220c: 0x90e30150  lbu         $v1, 0x150($a3)
    ctx->pc = 0x13220cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x132210: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132210u;
    {
        const bool branch_taken_0x132210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x132210) {
            ctx->pc = 0x132220u;
            goto label_132220;
        }
    }
    ctx->pc = 0x132218u;
    // 0x132218: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x132218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13221c: 0x0  nop
    ctx->pc = 0x13221cu;
    // NOP
label_132220:
    // 0x132220: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x132220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x132224: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x132224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x132228: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x132228u;
    {
        const bool branch_taken_0x132228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132228u;
            // 0x13222c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132228) {
            ctx->pc = 0x13220Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13220c;
        }
    }
    ctx->pc = 0x132230u;
label_132230:
    // 0x132230: 0x3e00008  jr          $ra
    ctx->pc = 0x132230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132238u;
    // 0x132238: 0x0  nop
    ctx->pc = 0x132238u;
    // NOP
    // 0x13223c: 0x0  nop
    ctx->pc = 0x13223cu;
    // NOP
    ctx->pc = 0x132240u;
}
